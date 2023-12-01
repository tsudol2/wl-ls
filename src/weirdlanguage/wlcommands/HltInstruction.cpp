//
// Created by sudol on 11/30/2023.
//

#include "HltInstruction.h"

void HltInstruction::execute() {
    WLCommand::execute();
}

void HltInstruction::args(std::vector<std::string> args) {
    WLCommand::args(args);
}
