//
// Created by Tyler Sudol on 11/18/23.
//

#include "LLNode.h"

// Default Constructor
LLNode::LLNode() {
    val = 0;
    next = nullptr;
}

// Convenience Constructor
LLNode::LLNode(int x) {
    val = x;
    next = nullptr;
}
