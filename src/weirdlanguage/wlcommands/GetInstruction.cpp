//
// Created by Tyler Sudol on 11/30/2023.
//

#include "GetInstruction.h"

void GetInstruction::execute() {
    receiver_->get(var_, index_, list_);
}

void GetInstruction::args(std::vector<std::string> args) {
    var_ = args.at(0);
    index_ = stoi(args.at(1));
    list_ = args.at(2);
}
