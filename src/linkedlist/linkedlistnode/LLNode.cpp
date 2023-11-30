//
// Created by Tyler Sudol on 11/18/23.
//

#include "LLNode.h"

// Default Constructor
LLNode::LLNode() {
    valInt_ = 0;
    next_ = nullptr;
    isInt_ = true;
}

// Convenience Constructor
LLNode::LLNode(int x) {
    valInt_ = x;
    next_ = nullptr;
    isInt_ = true;
}

// Convenience Constructor
LLNode::LLNode(LLNode* x) {
    valLL_ = x;
    next_ = nullptr;
    isInt_ = false;
}
