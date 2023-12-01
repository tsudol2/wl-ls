//
// Created by Tyler Sudol on 11/30/2023.
//

#include "IfInstruction.h"

void IfInstruction::execute() {
    receiver_->ifInstr(var_, line_);
}

void IfInstruction::args(std::vector<std::string> args) {
    var_ = args[0];
    line_ = stoi(args[1]);
}
