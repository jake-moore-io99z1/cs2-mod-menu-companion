#pragma once
#include <windows.h>
#include <string>

class Memory {
    HANDLE hProc;
public:
    Memory(const std::string& procName) { hProc = nullptr; }
    bool Init() { return true; }
    template<typename T> T Read(uintptr_t addr) {
        T buffer;
        ReadProcessMemory(hProc, (LPCVOID)addr, &buffer, sizeof(T), nullptr);
        return buffer;
    }
};
