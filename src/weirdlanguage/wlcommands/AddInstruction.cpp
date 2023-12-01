//
// Created by Tyler Sudol on 11/30/2023.
//

#include "AddInstruction.h"

void AddInstruction::execute() {
    receiver_->add(var1_, var2_);
}

void AddInstruction::args(std::vector<std::string> args) {
    var1_ = args[0];
    var2_ = args[1];
}
