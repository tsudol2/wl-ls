//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_VARLISTINSTRUCTION_H
#define WL_LS_VARLISTINSTRUCTION_H

#include "WLCommand.h"

class VarListInstruction: public WLCommand {
public:
    VarListInstruction(): receiver_(nullptr), val_(0) {};
private:
    WLReceiver* receiver_;
    std::string var_;
    int val_;
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
};

#endif //WL_LS_VARLISTINSTRUCTION_H
