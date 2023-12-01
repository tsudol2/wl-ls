//
// Created by tyler sudol on 11/30/2023.
//

#ifndef WL_LS_WLLANGUAGESYSTEM_H
#define WL_LS_WLLANGUAGESYSTEM_H

#include <string>
#include "WLInvoker.h"
#include "WLReceiver.h"
#include "wlcommands/WLCommandFactory.h"

class WLLanguageSystem {
public:
    WLLanguageSystem();
    void runInstruction();
    void commandO();
    void commandA();
    void printInstructions();
private:
    std::string instructionList_;
    int pc_;
    WLInvoker invoker_;
    WLReceiver receiver_;
    WLCommandFactory factory_;
    std::string path_;
};

#endif //WL_LS_WLLANGUAGESYSTEM_H
