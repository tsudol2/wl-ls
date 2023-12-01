//
// Created by Tyler Sudol on 11/30/2023.
//

#include "VarListInstruction.h"
#include <vector>

void VarListInstruction::execute() {
    receiver_->createVarList(var_, val_);
}

void VarListInstruction::args(std::vector<std::string> args) {
    var_ = args.front();
    args.erase(args.begin());
    for (const auto& e : args) {
        val_.push_back(stoi(e));
    }
}
