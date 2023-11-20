//
// Created by Tyler Sudol
//

#include "LLNode.h"

// Default Constructor
LLNode::LLNode() {
    _val = 0;
    _next = nullptr;
}

// Convenience Constructor
LLNode::LLNode(int val) {
    _val = val;
    _next = nullptr;
}

int LLNode::getVal() {
    return _val;
}

LLNode* LLNode::getNext() {
    return _next;
}
