//
// Created by Tyler Sudol on 11/30/2023.
//

#include "SetInstruction.h"

void SetInstruction::execute() {
    receiver_->set(var_, index_, listName_);
}

void SetInstruction::args(std::vector<std::string> args) {
    var_ = args[0];
    index_ = stoi(args[1]);
    listName_ = args[2];
}
