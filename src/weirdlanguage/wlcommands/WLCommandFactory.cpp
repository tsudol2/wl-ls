//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLCommandFactory.h"
#include <string>

WLCommandFactory::WLCommandFactory() {
    instrMap_.emplace("VARINT", std::shared_ptr<WLCommand>(new VarIntInstruction()));
    instrMap_.emplace("VARLIST", std::shared_ptr<WLCommand>(new VarListInstruction()));
    instrMap_.emplace("COMBINE", std::shared_ptr<WLCommand>(new CombineInstruction()));
    instrMap_.emplace("GET", std::shared_ptr<WLCommand>(new GetInstruction()));
    instrMap_.emplace("SET", std::shared_ptr<WLCommand>(new SetInstruction()));
    instrMap_.emplace("COPY", std::shared_ptr<WLCommand>(new CopyInstruction()));
    instrMap_.emplace("CHS", std::shared_ptr<WLCommand>(new ChsInstruction()));
    instrMap_.emplace("ADD", std::shared_ptr<WLCommand>(new AddInstruction()));
    instrMap_.emplace("GOTO", std::shared_ptr<WLCommand>(new GotoInstruction()));
    instrMap_.emplace("IF", std::shared_ptr<WLCommand>(new IfInstruction()));
    instrMap_.emplace("HLT", std::shared_ptr<WLCommand>(new HltInstruction()));
}

WLCommandFactory::~WLCommandFactory() {
    // free the allocated WLCommand pointers
    for (const auto& e : instrMap_) {
//        auto x = instrMap_[e.first].release();
//        delete x;
        instrMap_[e.first].reset();
    }
    instrMap_.clear();
}

// Invoke a command object's execute method given an instruction's key
WLCommand* WLCommandFactory::getCommand(const std::string& key, WLReceiver* receiver, std::vector<std::string> args) {
    auto instr = instrMap_[key].get();
    instr->receiver(receiver);
    instr->args(args);
    return instr;
}
