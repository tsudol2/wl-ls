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

void WLReceiver::createVarList(const std::string &, std::vector<int>) {

}

void WLReceiver::combine(std::vector<int>, std::vector<int>) {

}

void WLReceiver::copy(std::vector<int>, std::vector<int>) {

}

void WLReceiver::get(const std::string &, int, std::vector<int>) {

}

void WLReceiver::set(const std::string &, int, std::vector<int>) {

}

void WLReceiver::chs(const std::string &) {

}

void WLReceiver::add(const std::string &, const std::string &) {

}

void WLReceiver::goTo(int) {

}

void WLReceiver::ifInstr(int, const std::string &) {

}

void WLReceiver::hlt() {

}
