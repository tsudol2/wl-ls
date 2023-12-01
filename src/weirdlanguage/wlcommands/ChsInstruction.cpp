//
// Created by Tyler Sudol on 11/30/2023.
//

#include "ChsInstruction.h"

void ChsInstruction::execute() {
    WLCommand::execute();
}

void ChsInstruction::args(std::vector<std::string> args) {
    WLCommand::args(args);
}
