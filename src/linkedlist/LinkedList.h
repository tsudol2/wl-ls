//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LINKEDLIST_H
#define WL_LS_LINKEDLIST_H

class LinkedList;

#include "linkedlistnode/LLNode.h"
#include <vector>

class LinkedList {
public:
    LinkedList();
    explicit LinkedList(int);
    ~LinkedList();
    LinkedList(const LinkedList&);
    LinkedList& operator=(const LinkedList&);
    bool isEmpty() const;
    LinkedList& insert(int);
    LinkedList& replaceAt(int);
    int valueAt();
    std::vector<int> toVector();
    void print();
private:
    void checkLinkedList_();
    void recursiveDelete_(LLNode*);
    void copyList_(const LinkedList &other);
protected:
    LLNode* head_{};
    LLNode* tail_{};
    int size_{};
};

#endif //WL_LS_LINKEDLIST_H
