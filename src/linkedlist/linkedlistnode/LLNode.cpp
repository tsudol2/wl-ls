//
// Created by Tyler Sudol on 11/18/23.
//

#include "LLNode.h"

// Default Constructor
LLNode::LLNode() {
    val_ = 0;
    next = nullptr;
}

// Convenience Constructor
LLNode::LLNode(int val) {
    val_ = val;
    next = nullptr;
}

int LLNode::getVal() {
    return val_;
}
