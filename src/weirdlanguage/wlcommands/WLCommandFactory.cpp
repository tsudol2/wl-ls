//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLCommandFactory.h"
#include <string>

WLCommandFactory::WLCommandFactory() {
    instrMap_.emplace("VARINT", new VarIntInstruction);
}

// Invoke a command object's execute method given an instruction's key
WLCommand* WLCommandFactory::getCommand(const std::string& key, WLReceiver* receiver, std::vector<std::string> args) {
    auto instr = instrMap_[key];
    instr->receiver(receiver);
    instr->args(args);
    return instrMap_[key];
}
