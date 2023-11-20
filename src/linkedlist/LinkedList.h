//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LINKEDLIST_H
#define WL_LS_LINKEDLIST_H

class LinkedList;

#include "linkedlistnode/LLNode.h"

class LinkedList {
public:
    LinkedList();
    LinkedList(int);
    void print();
private:
protected:
    LLNode* _head;
};

#endif //WL_LS_LINKEDLIST_H
