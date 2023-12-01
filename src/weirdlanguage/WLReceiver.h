//
// Created by sudol on 11/30/2023.
//

#ifndef WL_LS_WLRECEIVER_H
#define WL_LS_WLRECEIVER_H

#include <string>
#include <map>
#include "../linkedlist/LinkedList.h"

class WLReceiver {
public:
    WLReceiver(): programData_({}), pc_(0) {};
    inline int pc() const { return pc_; }
    void printData();
    void createVarInt(const std::string&, int);
    // add all instructions
private:
    std::map<std::string, LinkedList> programData_;
    int pc_;
};

#endif //WL_LS_WLRECEIVER_H
