//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_SETINSTRUCTION_H
#define WL_LS_SETINSTRUCTION_H

#include "WLCommand.h"

class SetInstruction: public WLCommand {
public:
    SetInstruction():receiver_(nullptr), index_(0) {};
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string var_;
    int index_;
    std::string listName_;
};

#endif //WL_LS_SETINSTRUCTION_H
