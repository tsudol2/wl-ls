//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLCommandFactory.h"
#include <string>

WLCommandFactory::WLCommandFactory() {
    instrMap_.emplace("VARINT", new VarIntInstruction);
    instrMap_.emplace("VARLIST", new VarListInstruction);
    instrMap_.emplace("COMBINE", new CombineInstruction);
    instrMap_.emplace("GET", new GetInstruction);
    instrMap_.emplace("SET", new SetInstruction);
    instrMap_.emplace("COPY", new CopyInstruction);
    instrMap_.emplace("CHS", new ChsInstruction);
    instrMap_.emplace("ADD", new AddInstruction);
    instrMap_.emplace("GOTO", new GotoInstruction);
    instrMap_.emplace("IF", new IfInstruction);
    instrMap_.emplace("HLT", new HltInstruction);
}

WLCommandFactory::~WLCommandFactory() {
    // free the allocated WLCommand pointers
    for (const auto& e : instrMap_) {
        delete e.second;
    }
}

// Invoke a command object's execute method given an instruction's key
WLCommand* WLCommandFactory::getCommand(const std::string& key, WLReceiver* receiver, std::vector<std::string> args) {
    auto instr = instrMap_[key];
    instr->receiver(receiver);
    instr->args(args);
    return instrMap_[key];
}
