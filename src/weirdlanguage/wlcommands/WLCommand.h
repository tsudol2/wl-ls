//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_WLCOMMAND_H
#define WL_LS_WLCOMMAND_H

#include "../WLReceiver.h"

class WLCommand {
public:
    WLCommand();
    virtual void execute();
    virtual void receiver(WLReceiver*);
    virtual void args(std::vector<std::string>);
};

#endif //WL_LS_WLCOMMAND_H
