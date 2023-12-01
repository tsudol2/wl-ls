//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_GOTOINSTRUCTION_H
#define WL_LS_GOTOINSTRUCTION_H

#include "WLCommand.h"

class GotoInstruction: public WLCommand {
public:
    GotoInstruction(): receiver_ (nullptr), line_(0) {};
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    int line_;
};

#endif //WL_LS_GOTOINSTRUCTION_H
