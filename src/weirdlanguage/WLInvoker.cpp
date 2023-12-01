//
// Created by Tyler Sudol on 11/30/2023.
//

#include "WLInvoker.h"

WLInvoker::WLInvoker() = default;

void WLInvoker::executeCommand(WLCommand* cmd) {
    cmd->execute();
}
