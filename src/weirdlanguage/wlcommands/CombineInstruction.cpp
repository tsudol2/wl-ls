//
// Created by Tyler Sudol on 11/30/2023.
//

#include "CombineInstruction.h"

void CombineInstruction::execute() {
    receiver_->combine(var_, var2_);
}

void CombineInstruction::args(std::vector<std::string> args) {
    var_ = args.front();
    var2_ = args.at(1);
}
