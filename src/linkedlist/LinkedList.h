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
    explicit LinkedList(int);
    ~LinkedList();
    LinkedList(const LinkedList&);
    LinkedList& operator=(const LinkedList&);
    LinkedList& insert(int);
    LinkedList& replaceAt(int);
    int valueAt();
    std::vector<int> toVector();
    void copy();
    bool isEmpty();
    void print();
private:
    void _checkLinkedList();
    void _copy();
protected:
    LLNode* _head;
    LLNode* _tail;
    int _size;
};

#endif //WL_LS_LINKEDLIST_H
