//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_ADDINSTRUCTION_H
#define WL_LS_ADDINSTRUCTION_H

#include "WLCommand.h"

class AddInstruction: public WLCommand {
public:
    AddInstruction(): receiver_(nullptr) {};
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string var1_;
    std::string var2_;
};

#endif //WL_LS_ADDINSTRUCTION_H
