//
// Created by Tyler Sudol on 11/18/23.
//

#include "LLNode.h"

// Default Constructor
LLNode::LLNode() {
    val_ = 0;
    next_ = nullptr;
}

// Convenience Constructor
LLNode::LLNode(int x) {
    val_ = x;
    next_ = nullptr;
}
