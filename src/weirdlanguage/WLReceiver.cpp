//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLReceiver.h"
#include <iostream>

void WLReceiver::printData() {
    std::cout << "Program memory (var: data):" << std::endl;
    for (auto e : programData_) {
        std::cout << e.first << " ";
        e.second.print();
    }
}

void WLReceiver::createVarInt(const std::string& var, int value) {
    pc_ += 1;
    programData_.emplace(var, LinkedList(value));
}
