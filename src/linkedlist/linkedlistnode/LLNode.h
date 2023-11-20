//
// Created by Tyler Sudol
//

#ifndef WL_LS_LLNODE_H
#define WL_LS_LLNODE_H

class LLNode {
public:
    LLNode();
    LLNode(int);
    int getVal();
    LLNode* getNext();
private:
protected:
    int _val;
    LLNode* _next;
};

#endif //WL_LS_LLNODE_H
