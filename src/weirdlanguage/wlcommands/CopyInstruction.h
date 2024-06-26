//
// Created by Tyler Sudol on 11/30/2023.
//

#ifndef WL_LS_COPYINSTRUCTION_H
#define WL_LS_COPYINSTRUCTION_H

#include "WLCommand.h"

class CopyInstruction: public WLCommand {
public:
    CopyInstruction():receiver_(nullptr) {};
    void execute() override;
    inline void receiver(WLReceiver* r) override { receiver_ = r; }
    void args(std::vector<std::string> args) override;
private:
    WLReceiver* receiver_;
    std::string list1_;
    std::string list2_;
};

#endif //WL_LS_COPYINSTRUCTION_H
