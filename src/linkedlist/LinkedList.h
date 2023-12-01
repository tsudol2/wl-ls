//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LINKEDLIST_H
#define WL_LS_LINKEDLIST_H

class LinkedList;

#include "linkedlistnode/LLNode.h"
#include <vector>

class LLNode;

class LinkedList {
public:
    LinkedList(): head_(nullptr), tail_(nullptr), size_(0) {};
    explicit LinkedList(int);
    explicit LinkedList(LLNode*);
    ~LinkedList();
    LinkedList(const LinkedList&);
    LinkedList& operator=(const LinkedList&);
    inline bool isEmpty() const { return (size_ == 0); };
    LinkedList& insertInt(int);
    LinkedList& insertLL(LLNode*);
    LinkedList& replaceAtInt(int, int);
    LinkedList& replaceAtLL(int, LLNode*);
    int valueAtInt(int);
    LLNode* valueAtLL(int);
    std::vector<std::vector<int>> toVector();
    void print();
    inline LLNode* head() { return head_; }
    inline int size() const { return size_; }
private:
    void recursiveDelete_(LLNode*);
    void copyList_(const LinkedList &other);
protected:
    LLNode* head_{};
    LLNode* tail_{};
    int size_{};
};

#endif //WL_LS_LINKEDLIST_H
