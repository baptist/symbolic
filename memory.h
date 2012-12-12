/* 
 * File:   memory.h
 * Author: baptist
 *
 * Created on November 26, 2012, 5:35 PM
 */

#ifndef MEMORY_H
#define	MEMORY_H

#include "var.h"
#include "printer.h"

#include <map>
#include <string>


namespace as {
    
// types
typedef struct {
   se::Var<float> f[4];
} __m128;

typedef struct {
   se::Var<double> d[4];
} __m256;



class Memory {
    
private:
    std::map<int, se::Var<double>*> mem;    
    int numVars;
    
public:
    
    Memory(): numVars(0) {}
    ~Memory()
    {
        // Delete dynamically allocated memory
        // TODO run over map and delete objects
    }
          
    se::Var<double>* getLocation(int location, int size, bool read)
    {        
        // Check location
        if (mem.find(location) != mem.end())
        {
            se::Var<double>* obj = mem.at(location);
            
            if (read && !obj->isSetSymbolic())
                obj->setUnsymbolic(false);    
            else if (!obj->isSetSymbolic())
                obj->setUnsymbolic(true);  
            
            return obj;
        } 
        else
        {
            // Create, store and return new object
            se::Var<double>* obj = new se::Var<double>();
            
            if (read)
                obj->setSymbolic(se::Printer::generateName("x", numVars++));   
            else
                obj->setUnsymbolic(true);   
                        
            mem.insert(std::make_pair(location, obj));
            return obj;
        }        
    }
    
    std::map<int, se::Var<double>*> getMem() { return mem; }
};

// Create memory object (~ mem manager)
Memory memory;

class Argument {
    
public:
    Argument() {}
    ~Argument() {}
};


class Register : public Argument {
    
protected:
    int memLoc;
    int size; // number of bits
    se::Var<double> value; // only first <size> bits are used
    
public:
    Register() : size(64), memLoc(0), value((int) this) {}    
    Register(const int size): size (size), value((int) this), memLoc(0) {}    
    Register(const int size, se::Var<double> value): size (size), value(value), memLoc(0) {}   
    ~Register() {}
    
    void setMemLoc(int loc) { memLoc = loc; }
    int getMemLoc() { return memLoc; }
    
    const se::Var<double> getValue() 
    {
        // TODO THINK ABOUT THIS    
        return value;
    }
    void setValue (se::Var<double> d)
    {
        value = d;
    }
        
    operator int() {
        return (int) value.getValue();
    }
    
    
};

class Pointer : public Argument {
    
protected:
    int memoryLocation;    
    int size; // number of bits    
    
public:
    Pointer() : size(64), memoryLocation(0) {}    
    Pointer(const int size): size (size), memoryLocation(0) {}    
    ~Pointer() {}
   
    void setMemoryLocation(int loc) { memoryLocation = loc; }
    int getMemoryLocation() { return memoryLocation; }
  
    se::Var<double>* getValue(bool read) { return  memory.getLocation(memoryLocation, size, read); }
   
    
    Pointer operator[] (int loc) 
    {
        memoryLocation = loc;        
        return *this;
    }
};

class StackRegister : public Register {
    
private:
            
public:
    StackRegister(): Register(64) {}
    ~StackRegister() {}    
};

}

/*
typedef std::shared_ptr<Argument> SharedArgument;

class RealValue : public Argument {

private:
    double value;
    
public:
    
    RealValue(double val): value(val) {}
    se::se::Var<double> getValue() const { return se::se::Var<double>(value); }
};

class Register : public Argument {
    
private:
    const std::string name;
    int size;
    double value[4];
    
public:
    Register() : name(), size(1) {}    
    Register(const std::string name): name (name) {}
    Register(const std::string name, int size): name (name), size (size) {}
    
    
    void setValue(double* val) 
    { 
        for (int i = 0; i < size; i++)
            value[i] = val[i]; 
    }
    double* getValue() const { return value; }
    
};

class BaseRegister : public Register {
public:
    BaseRegister(): Register("rbp") {}
    se::se::Var<double> getValue() const { return getValue(); }    
};

class StackRegister : public Register {
public:
    StackRegister(): Register("rsp") {}
    se::se::Var<double> getValue() const { return getValue(); }
};



class Arguments {
    
private:
        
    std::vector<SharedArgument> args;
    
    
public:
    Arguments() {}
    
    void add(SharedArgument arg)
    {
        args.push_back(arg);
    }
    
    SharedArgument getFirst() 
    {
        return args[0];
    }
    SharedArgument getSecond() 
    {
        return args[1];
    }

};

template<typename T>
class MemoryManagement {

private:   
    std::map<std::string, Register*> registers;
    se::se::Var<T>* input;
    se::se::Var<T>* output;
    int sizeInput, sizeOutput;
    
    int mapLocation(double loc) 
    {
        if (-loc > (sizeInput + sizeOutput) * 8 )
            return -1;
        else if (-loc < 16)
            return -1;
        else
            return (((sizeInput + sizeOutput) * 8) - loc) / 8;
    }
    
public:
    MemoryManagement() 
    {
        // Insert base register and stack register
        registers.insert(std::make_pair("rbp", new BaseRegister()));
        registers.insert(std::make_pair("rsp", new StackRegister()));
    }    
    ~MemoryManagement() 
    {
        // TODO Delete all registers
    }
    
    Register* findRegister(std::string name)
    {
       if (registers.find(name) != registers.end())
            return registers.at(name);        
        else
        {
            Register* reg = new Register(name);
            registers.insert(std::make_pair(name, reg));
            return reg;
        } 
    }
    
    se::se::Var<T> findValue(double location) 
    {
        int index = mapLocation(location);
        
        if (index >= 0 && index < sizeInput)
            return input[index];
        else if (index >= 0 && index < sizeOutput)
            return output[index];
        else
            return se::se::Var<T>();
    }
    
    void setInput(se::se::Var<T>* in, int size) { input = in; sizeInput = size;  }
    void setOutput(se::se::Var<T>* out, int size) { output = out; sizeOutput = size; }
};

MemoryManagement<double> mem;


class MemoryRef : public Argument {
private:
    Register* base;
    Register* offset;
    int displacement;
    int scalar;
    
public:
    MemoryRef() {}
    MemoryRef(Register* base) : displacement(displacement){}
    MemoryRef(int displacement, Register* base) : displacement(displacement), base (base) {}
    MemoryRef(int displacement, Register* base, Register* offset) : displacement(displacement), base (base), offset(offset) {}
    MemoryRef(int displacement, Register* base, Register* offset, int scalar) : displacement(displacement), base (base), offset(offset), scalar (scalar) {}

    se::se::Var<double> getValue() const { return mem.findValue(base->getValue() + (displacement) + (scalar * offset->getValue())); }
};



}
*/
#endif	/* MEMORY_H */

