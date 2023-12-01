//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_HLTINSTRUCTION_H
#define WL_LS_HLTINSTRUCTION_H

#include "WLCommand.h"

class HltInstruction: public WLCommand {
public:
    HltInstruction(): receiver_(nullptr) {};
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
};

#endif //WL_LS_HLTINSTRUCTION_H
