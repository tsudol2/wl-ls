//
// Created by Tyler Sudol on 11/18/23.
//

#ifndef WL_LS_LLNODE_H
#define WL_LS_LLNODE_H

class LLNode {
public:
    LLNode();
    explicit LLNode(int);
    int getVal();
    LLNode* next;
private:
    int val_;
};

#endif //WL_LS_LLNODE_H
