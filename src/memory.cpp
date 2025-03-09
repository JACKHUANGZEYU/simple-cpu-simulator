#include "memory.h"

Memory::Memory() {
    for(int i = 0; i < 256; ++i)
        memory[i] = 0; // Initialize all memory to zero
}

int Memory::read(int address) {
    if(address >= 0 && address < 256)
        return memory[address];
    return -1; // Out of bounds address handling (simple)
}

void Memory::write(int address, int value) {
    if(address >= 0 && address < 256)
        memory[address] = value; // Write value to memory
}
