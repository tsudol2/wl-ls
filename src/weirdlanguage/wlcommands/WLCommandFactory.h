//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_WLCOMMANDFACTORY_H
#define WL_LS_WLCOMMANDFACTORY_H

#include "WLCommand.h"
#include "VarIntInstruction.h"
#include <map>
#include <memory>

class WLCommandFactory {
public:
    WLCommandFactory();
    WLCommand* getCommand(const std::string &key, WLReceiver*, std::vector<std::string>);
private:
    std::map<std::string, WLCommand*> instrMap_;
};

#endif //WL_LS_WLCOMMANDFACTORY_H
