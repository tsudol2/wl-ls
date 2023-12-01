//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_WLLANGUAGESYSTEM_H
#define WL_LS_WLLANGUAGESYSTEM_H

#include <string>
#include <vector>
#include "WLInvoker.h"
#include "WLReceiver.h"
#include "wlcommands/WLCommandFactory.h"

class WLLanguageSystem {
public:
    WLLanguageSystem(): instructions_({}), invoker_(WLInvoker()), receiver_(WLReceiver()), factory_(WLCommandFactory()) {};
    explicit WLLanguageSystem(std::vector<std::string>);
    void runInstruction();
    void commandO();
    void commandA();
    void printInstructions();
private:
    std::vector<std::string> instructions_;
    WLInvoker invoker_;
    WLReceiver receiver_;
    WLCommandFactory factory_;
};

#endif //WL_LS_WLLANGUAGESYSTEM_H
