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
    ~WLReceiver();
    inline int pc() const { return pc_; }
    void printData();
    void createVarInt(const std::string&, int);
    void createVarList(const std::string&, const std::vector<int>&);
    void combine(const std::string &, const std::string &);
    void copy(const std::string &, const std::string &);
    void get(const std::string&, int, std::string &);
    void set(const std::string&, int, const std::string &);
    void chs(const std::string&);
    void add(const std::string&, const std::string&);
    void goTo(int);
    void ifInstr(const std::string &, int);
    void hlt();
private:
    std::map<std::string, LinkedList> programData_;
    int pc_;
};

#endif //WL_LS_WLRECEIVER_H
