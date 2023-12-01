//
// Created by Tyler Sudol on 11/30/2023.
//

#include "VarIntInstruction.h"

void VarIntInstruction::execute() {
    receiver_->createVarInt(var_, val_);
}

void VarIntInstruction::args(std::vector<std::string> args) {
    var_ = args.front();
    val_ = stoi(args.at(1));
}
