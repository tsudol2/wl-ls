//
// Created by sudol on 11/30/2023.
//

#ifndef WL_LS_WLRECEIVER_H
#define WL_LS_WLRECEIVER_H

#include <string>
#include "../linkedlist/LinkedList.h"

class WLReceiver {
public:
    WLReceiver();
    void printData();
    void createVarInt(std::string, int);
    // add all instructions
private:
    LinkedList programData_;
    int pc_;
};

#endif //WL_LS_WLRECEIVER_H
