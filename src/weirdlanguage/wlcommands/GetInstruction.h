//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_GETINSTRUCTION_H
#define WL_LS_GETINSTRUCTION_H

#include "WLCommand.h"

class GetInstruction: public WLCommand {
public:
    GetInstruction() = default;
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string var_;
    int val_;
};

#endif //WL_LS_GETINSTRUCTION_H
