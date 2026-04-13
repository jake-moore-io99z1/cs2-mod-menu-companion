#include <iostream>
#include <windows.h>
#include "memory.h"
#include "overlay.h"

int main() {
    SetConsoleTitleA("System Configurator");
    std::cout << "[+] Initializing drivers..." << std::endl;
    Memory mem("target.exe");
    if (!mem.Init()) {
        std::cout << "[-] Failed to hook process." << std::endl;
        return 1;
    }
    std::cout << "[+] Connected! Starting overlay..." << std::endl;
    Overlay ov;
    ov.RenderLoop();
    return 0;
}
