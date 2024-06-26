//
// Created by sudol on 11/30/2023.
//

#ifndef WL_LS_IFINSTRUCTION_H
#define WL_LS_IFINSTRUCTION_H

#include "WLCommand.h"

class IfInstruction: public WLCommand {
public:
    IfInstruction() = default;
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string var_;
    int line_;
};

#endif //WL_LS_IFINSTRUCTION_H
