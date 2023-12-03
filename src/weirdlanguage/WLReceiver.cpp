//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLReceiver.h"
#include <iostream>

WLReceiver::~WLReceiver() {
//    for (auto e : programData_) {
//        delete e.second;
//    }
    programData_.clear();
}

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

void WLReceiver::createVarList(const std::string &var, const std::vector<int>& values) {
    pc_ += 1;

    LinkedList varList = LinkedList();
    if (!values.empty()) {
        for (auto e : values) {
            LinkedList v = LinkedList(e);
            // check if var is an exising variable
            if (programData_.count(var)) {
                if (programData_.at(var).isInt()) {
                    varList.insertInt(e);
                } else {
                    varList.insertLL(v.head());
                }
            } else {
                varList.insertInt(e);
            }
        }
    }
    programData_[var] = varList;
}

void WLReceiver::combine(const std::string &l1, const std::string &l2) {
    pc_ += 1;

    LinkedList ll1 = programData_[l1];
    LinkedList ll2 = programData_[l2];
    std::vector<std::vector<int>> v1 = ll1.toVector();
    std::vector<std::vector<int>> v2 = ll2.toVector();
    std::vector<std::vector<int>> combinedVec = v1;
    combinedVec.insert(combinedVec.end(), v2.begin(), v2.end());

    LinkedList newList = LinkedList();
    for (const auto& e : combinedVec) {
        for (auto f : e) {
            newList.insertInt(f);
        }
    }
    programData_[l2] = newList;
}

void WLReceiver::copy(const std::string & l1, const std::string &l2) {
    pc_ += 1;
    programData_[l1] = LinkedList(programData_[l2]);
}

void WLReceiver::get(const std::string &var, int index, std::string &listName) {
    pc_ += 1;

    // get list from program data
    LinkedList list = programData_[listName];

    // create a new var at i in list
    if (list.isInt()) {
        programData_.emplace(var, list.valueAtInt(index));
    } else {
        programData_.emplace(var, list.valueAtLL(index));
    }
}

void WLReceiver::set(const std::string &var, int index, const std::string &listName) {
    pc_ += 1;

    // get list from program data
    LinkedList list = programData_[listName];

    // check if var is stored as a VARLIST or VARINT
    if (programData_.count(var)){
        auto e = programData_.at(var);
        if (e.isInt()) {
            list.replaceAtInt(index, programData_[var].valueAtInt(index));
        } else {
            list.replaceAtLL(index, programData_[var].valueAtLL(index));
        }
    } else {
        list.replaceAtInt(index, stoi(var));
    }

}

void WLReceiver::chs(const std::string &var) {
    pc_ += 1;

    if (programData_.count(var)) {
        int value = programData_[var].valueAtInt(0);
        programData_[var].replaceAtInt(0, value * -1);
    }
}

void WLReceiver::add(const std::string &var1, const std::string &var2) {
    pc_ += 1;

    if (programData_[var1].isInt() && programData_[var2].isInt()) {
        LinkedList newVal = LinkedList(programData_[var1].valueAtInt(0) + programData_[var2].valueAtInt(0));
        programData_[var1] = newVal;
    } else {
        std::cout << "Edge case" << std::endl;
    }
}

void WLReceiver::goTo(int line) {
    pc_ = line;
}

void WLReceiver::ifInstr(const std::string &var, int line) {
    if (!programData_.count(var) || programData_[var].valueAtInt(0) == 0) {
        pc_ = line;
    }
    pc_ += 1;
}

void WLReceiver::hlt() {
    pc_ = -1;
    std::cout << "Program terminated" << std::endl;
}
