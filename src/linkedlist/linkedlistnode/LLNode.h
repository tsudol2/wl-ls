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

    LLNode* _next;
private:
protected:
    int _val;
};

#endif //WL_LS_LLNODE_H
