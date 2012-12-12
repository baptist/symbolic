/* 
 * File:   Instruction.h
 * Author: baptist
 *
 * Created on September 21, 2012, 4:54 PM
 */

#ifndef INSTRUCTION_H
#define	INSTRUCTION_H

#include <memory>
#include <string>

using namespace std;

enum Instr : unsigned short {
    LABEL,
    MOVE,
    PUSH,
    POP
};

enum Suffix : unsigned short {
    BYTE,
    SHORT,
    WORD,
    LONG,
    QUAD,
    TEN,
    DEFAULT
};

class Instruction {
public:
    
    static bool isSuffix(char c) { return c == 'b' || c == 's' || c == 'w' || c == 'l' || c == 'q' || c == 't'; }
    static Suffix getSuffix(char c) 
    { 
        switch (c)
        {
            case 'b':
                return BYTE;
                break;
            case 's':
                return SHORT;
                break;
            case 'w':
                return WORD;
                break;
            case 'l':
                return LONG;
                break;
            case 'q':
                return QUAD;
                break;
            case 't':
                return TEN;
                break; 
            default:
                return DEFAULT;
        }
    }
    
private:
    
protected:
    Instr instruction;

    Instruction(Instr name): instruction(name) {} 
    Instr getInstructionName() { return instruction; }
};

typedef shared_ptr<Instruction> SharedInstruction;

class LabelInstruction : public Instruction {
public:
    LabelInstruction(string name) : Instruction(LABEL), name(name) {}
private:
    string name;
};


class MoveInstruction : public Instruction {
public:
    MoveInstruction(): Instruction(MOVE) {}
private:
    
};

#endif	/* INSTRUCTION_H */

