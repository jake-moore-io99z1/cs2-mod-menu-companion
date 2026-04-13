#pragma once
#include <iostream>

class Overlay {
public:
    void RenderLoop() {
        std::cout << "Overlay rendering started." << std::endl;
        while (true) { Sleep(100); }
    }
};
