//
// Created by Tyler Sudol on 11/30/2023.
//

#include "ChsInstruction.h"

void ChsInstruction::execute() {
    receiver_->chs(var_);
}

void ChsInstruction::args(std::vector<std::string> args) {
    var_ = args[0];
}
