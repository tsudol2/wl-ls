//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_WLINVOKER_H
#define WL_LS_WLINVOKER_H

#include "wlcommands/WLCommand.h"
#include "WLReceiver.h"

class WLInvoker {
public:
    WLInvoker();
    void executeCommand(WLCommand*);
};

#endif //WL_LS_WLINVOKER_H
