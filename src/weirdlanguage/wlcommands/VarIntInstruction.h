//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_VARINTINSTRUCTION_H
#define WL_LS_VARINTINSTRUCTION_H

#include "WLCommand.h"
#include "../WLReceiver.h"
#include <string>
#include <utility>

class VarIntInstruction: public WLCommand {
public:
    VarIntInstruction(): receiver_(nullptr), val_(0) {};
    ~VarIntInstruction();
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string var_;
    int val_;
};

#endif //WL_LS_VARINTINSTRUCTION_H
