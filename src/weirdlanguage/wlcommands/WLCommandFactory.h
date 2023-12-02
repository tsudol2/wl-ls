//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_WLCOMMANDFACTORY_H
#define WL_LS_WLCOMMANDFACTORY_H

#include <map>
#include <memory>
#include "WLCommand.h"
#include "VarIntInstruction.h"
#include "VarListInstruction.h"
#include "CombineInstruction.h"
#include "GetInstruction.h"
#include "SetInstruction.h"
#include "CopyInstruction.h"
#include "ChsInstruction.h"
#include "AddInstruction.h"
#include "GotoInstruction.h"
#include "IfInstruction.h"
#include "HltInstruction.h"

class WLCommandFactory {
public:
    WLCommandFactory();
    ~WLCommandFactory();
    WLCommand* getCommand(const std::string &key, WLReceiver*, std::vector<std::string>);
private:
    std::map<std::string, WLCommand*> instrMap_;
};

#endif //WL_LS_WLCOMMANDFACTORY_H
