//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LLNODE_H
#define WL_LS_LLNODE_H

#include "../LinkedList.h"

class LinkedList;

class LLNode {
public:
    friend class LinkedList;
    inline int val() const { return val_; }
    inline LLNode* next() { return next_; }

    inline LLNode& val(int x) {
        val_ = x;
        return *this;
    }

    inline LLNode& next(LLNode* node) {
        next_ = node;
        return *this;
    }

private:
    LLNode();
    explicit LLNode(int);
    LLNode* next_;
    int val_;
};

#endif //WL_LS_LLNODE_H
