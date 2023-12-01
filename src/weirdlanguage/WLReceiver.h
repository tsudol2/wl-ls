//
// Created by Tyler Sudol on 11/30/2023.
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
    void createVarList(const std::string&, std::vector<int>);
    void combine(std::vector<int>, std::vector<int>);
    void copy(std::vector<int>, std::vector<int>);
    void get(const std::string&, int, std::vector<int>);
    void set(const std::string&, int, std::vector<int>);
    void chs(const std::string&);
    void add(const std::string&, const std::string&);
    void goTo(int);
    void ifInstr(int, const std::string&);
    void hlt();
private:
    std::map<std::string, LinkedList> programData_;
    int pc_;
};

#endif //WL_LS_WLRECEIVER_H
