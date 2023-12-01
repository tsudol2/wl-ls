//
// Created by Tyler Sudol on 11/30/2023.
//

#include "GotoInstruction.h"

void GotoInstruction::execute() {
    receiver_->goTo(line_);
}

void GotoInstruction::args(std::vector<std::string> args) {
    line_ = stoi(args[0]);
}
