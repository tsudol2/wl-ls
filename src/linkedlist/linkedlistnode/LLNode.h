//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LLNODE_H
#define WL_LS_LLNODE_H

class LLNode;

class LLNode {
public:
    LLNode();
    explicit LLNode(int);
    LLNode* next;
    int val;
};

#endif //WL_LS_LLNODE_H
