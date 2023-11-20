//
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include "LinkedList.h"

// Default constructor
LinkedList::LinkedList() {
    _head = new LLNode();
    _tail = nullptr;
    _size = 0;
}

// Convenience constructor
LinkedList::LinkedList(int val) {
    _head = new LLNode(val);
    _tail = _head;
    _size = 1;
}

// Destructor
LinkedList::~LinkedList() {
    LLNode* cur = _head;
    LLNode* temp;
    while (cur != nullptr) {
        temp = cur->_next;
        delete cur;
        cur = temp;
    }
}

//
// Given val is inserted at the end of the list
//
LinkedList &LinkedList::insert(int val) {
    LLNode* newNode = new LLNode(val);
    _tail->_next = newNode;
    _tail = _tail->_next;
    return *this;
}

void LinkedList::print() {
    std::vector<int> list = toVector();
    for (auto& e : list) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;
}

std::vector<int> LinkedList::toVector() {
    std::vector<int> list;
    LLNode* cur = _head;
    while(cur != nullptr) {
        list.push_back(cur->getVal());
        cur = cur->_next;
    }
    return list;
}
