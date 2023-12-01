//
// Created by tyler sudol on 11/30/2023.
//

#ifndef WL_LS_VARINTINSTRUCTION_H
#define WL_LS_VARINTINSTRUCTION_H

#include "WLCommand.h"
#include <string>

class VarIntInstruction: public WLCommand {
public:
    VarIntInstruction();
    VarIntInstruction(std::string, int);
    void execute();
};

#endif //WL_LS_VARINTINSTRUCTION_H
