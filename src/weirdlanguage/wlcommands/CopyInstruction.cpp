//
// Created by Tyler Sudol on 11/30/2023.
//

#include "CopyInstruction.h"

void CopyInstruction::execute() {
    receiver_->copy(list1_, list2_);
}

void CopyInstruction::args(std::vector<std::string> args) {
    list1_ = args[0];
    list2_ = args[1];
}
