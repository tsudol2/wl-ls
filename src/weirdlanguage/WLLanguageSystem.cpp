//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLLanguageSystem.h"
#include <utility>
#include <iostream>
#include <sstream>

WLLanguageSystem::WLLanguageSystem(std::vector<std::string> instructions) {
    instructions_ = std::move(instructions);
    invoker_ = WLInvoker();
    receiver_ = WLReceiver();
    factory_ = WLCommandFactory();
}

// Invokes an instruction
void WLLanguageSystem::runInstruction() {
    std::string instr = instructions_.at(receiver_.pc());

    // parse instr on ' '
    std::string instrName = instr.substr(0, instr.find(' '));
    std::string instrArgs = instr.substr(instr.find(' ') + 1);

    std::stringstream ss(instrArgs);
    std::string word;
    std::vector<std::string> args;
    while (ss >> word) {
        args.push_back(word);
    }

    std::cout << "Executing " << instr << std::endl;
    std::cout << "Program counter: " << receiver_.pc() << std::endl;

    // get cmd from factory
    WLCommand* cmd = factory_.getCommand(instrName, &receiver_, args);

    // Execute the command with the invoker
    invoker_.executeCommand(cmd);
    receiver_.printData();
    std::cout << std::endl;
}

// Run a single command
void WLLanguageSystem::commandO() {
    if (receiver_.pc() != instructions_.size() || receiver_.pc() == -1) {
        runInstruction();
    }
}

// Run all commands from program counter
void WLLanguageSystem::commandA() {
    std::cout << "Executing all remaining instructions..." << std::endl;
    while (receiver_.pc() < instructions_.size() && receiver_.pc() != -1) {
        runInstruction();
    }
}

// Print loaded instructions to std out
void WLLanguageSystem::printInstructions() {
    for (const auto& e : instructions_) {
        std::cout << e << std::endl;
    }
}

