#!/usr/bin/gawk -f
BEGIN {
	FS = " |\t";
	
	# defines always on top so print them first and save rest in array
	fileIndex = 0;
}

{
	# remove \r
	gsub(/\r$/, "");
	
	# remove comments
	line = gensub(/^[ \t]*([^;\#\/]*)[;\#\/]\/?.*$/, "\\1", "g");
	
	# remove and replace '@', '.', '::' signs
	gsub(/[@.]/, "_", line) 
	gsub(/::/, ":", line) 

	if (segm && !match(line, /^(_R)?(CONST|DATA)[ \t]ENDS$/)) {
		name = gensub(/[ \t]*([^ \t]+)[ \t]*(DD|DW|DB)[ \t]*(.*)$/, "#define \\1 ", "g", line)
		type = gensub(/[ \t]*([^ \t]+)[ \t]*(DD|DW|DB)[ \t]*(.*)$/, "\\2", "g", line)
		value = gensub(/[ \t]*([^ \t]+)[ \t]*(DD|DW|DB)[ \t]*(.*)$/, "\\3", "g", line)
		# split value on ','
		size = split(value,pieces,/,/);
		ind = 0;
		while (trim(pieces[ind]) == "") {
			ind++
		}	
		printf(" %s %s (", name, type); 
		for (i=ind; i <= size; i++) {				
			if (trim(pieces[i]) != "") {
				pieces[i] = gensub(/H/, "", "g", substr(pieces[i], 2))
				if (i < size) {
					printf("%s, ", pieces[i]);
				} else {
					printf("%s)\n ", pieces[i]);				
				}
			}
		}
		
		print out;
	} else if (trim(line) != "") {	# check if line is not empty
	
		if (match(line, /^_?sub[ \t]PROC/)) {
			infunction = 1;
			file[fileIndex++] =  "\nMAIN_FUNCTION()\n{"		
		} else if (match(line, /^_?init_sub[ \t]PROC/)) {
			infunction = 1;
			file[fileIndex++] =  "\nINIT_FUNCTION()\n{"			
		} else if (match(line, /[^:]+:[ \t]*$/))  # check if line equals label:
		{
			if (match(line, /^sub:$/)) {
				infunction = 1;
				file[fileIndex++] =   "\nMAIN_FUNCTION()\n{"
				# print "\t__asm {"
			} else if (match(line, /^init_sub:$/)) {
				infunction = 1;
				file[fileIndex++] =   "\nINIT_FUNCTION()\n{"
				# print "\t__asm {"
			} else {
				file[fileIndex++] = "// "  line
			}
		
		} else if (match(line, /_?(init_)?sub[ \t]ENDP/) || match(line, /^[ \t]*\.type[ \t](init_)?sub,.*$/)) {
		    infunction = 0;
			# print "\t}"
			file[fileIndex++] =   "}\n"			
		} else if (match(line, /=/)) {
			trim(gsub(/=/, " ", line))
			print  "#define " line
		} else if (match(line, /^(_R)?(CONST|DATA)[ \t]SEGMENT.*$/)) {
			segm = 1; 			
		} else if (match(line, /^(_R)?(CONST|DATA)[ \t]ENDS$/)) {	
			segm = 0;			
		} else if (match(line, /^[ \t]*v?(mov|sub|add|push|pop|mul|xor|xand|lea)/)) {			
			# add brackets between command and arguments
			size = split(line,linePieces,/[\t ]+/);
			ind = 0;
			while (trim(linePieces[ind]) == "") {
				ind++
			}
			file[fileIndex] =  "\t" toupper(trim(linePieces[ind])) "("	
			for (i=ind+1; i <= size; i++) {				
				if (trim(linePieces[i]) != "") {
					file[fileIndex] = file[fileIndex] " " trim(linePieces[i])
				}
			}
			file[fileIndex] = file[fileIndex] "); \n"
			fileIndex++
			
		} else {
			
			file[fileIndex++] =  "// __asm " trim(line) ""
					
		}
	} else {
		
	}	
}




END {
	# print file
	for (i = 0; i < fileIndex; i++) {
		print file[i]
	}
}


function ltrim(s) { gsub(/^[ \t]+/, "", s); return s }
function rtrim(s) { gsub(/[ \t]+$/, "", s); return s }
function trim(s)  { return rtrim(ltrim(s)); }

