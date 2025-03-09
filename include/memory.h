#ifndef MEMORY_H
#define MEMORY_H

class Memory {
private:
    static const int SIZE = 256;
    int memory[SIZE];

public:
    Memory();
    int read(int address);
    void write(int address, int value);
};

#endif
