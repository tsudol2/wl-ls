//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LLNODE_H
#define WL_LS_LLNODE_H

#include "../LinkedList.h"
#include <vector>

class LinkedList;

class LLNode {
public:
    friend class LinkedList;
    inline int valInt() const { return valInt_; }
    inline LLNode* valLL() const { return valLL_; }
    inline LLNode* next() { return next_; }
    inline bool isInt() const { return isInt_; }

    inline LLNode& valInt(int x) {
        valInt_ = x;
        return *this;
    }

    inline LLNode& valLL(LLNode* x) {
        valLL_ = x;
        return *this;
    }

    inline LLNode& next(LLNode* node) {
        next_ = node;
        return *this;
    }

private:
    LLNode();
    explicit LLNode(int);
    explicit LLNode(LLNode*);
    std::vector<int> toVector_();
    LLNode* next_;
    bool isInt_;

    union {
        int valInt_;
        LLNode* valLL_;
    };
};

#endif //WL_LS_LLNODE_H
