//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_CHSINSTRUCTION_H
#define WL_LS_CHSINSTRUCTION_H

#include "WLCommand.h"

class ChsInstruction: public WLCommand {
public:
    ChsInstruction(): receiver_(nullptr) {};
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string var_;
};

#endif //WL_LS_CHSINSTRUCTION_H
