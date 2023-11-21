//
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include "LinkedList.h"

// Default constructor
LinkedList::LinkedList() {
    head_ = tail_ = nullptr;
    size_ = 0;
}

// Convenience constructor
LinkedList::LinkedList(int val) {
    head_ = new LLNode(val);
    tail_ = head_;
    size_ = 1;
}

// Destructor
LinkedList::~LinkedList() {
    LLNode* cur = head_;
    LLNode* temp;
    while (cur != nullptr) {
        temp = cur->next;
        delete cur;
        cur = temp;
    }
    head_ = nullptr;
    tail_ = nullptr;
}

// TODO: implement
LinkedList::LinkedList(const LinkedList &) {
    ;
}

// TODO: implement
LinkedList &LinkedList::operator=(const LinkedList &) {
    return *this;
}

// Returns true if list is empty
bool LinkedList::isEmpty() const {
    return (size_ == 0);
}

//
// Arg val is inserted at the end of the list
//
LinkedList &LinkedList::insert(int val) {
    auto* newNode = new LLNode(val);
    if (isEmpty()) {
        head_ = newNode;
        tail_ = head_; 
    } else {
        tail_->next = newNode;
        tail_ = newNode;
    }
    size_ += 1;
    return *this;
}

// TODO: implement
LinkedList &LinkedList::replaceAt(int) {
    return *this;
}

// TODO: implement
int LinkedList::valueAt() {
    return 0;
}

// TODO: implement
void LinkedList::checkLinkedList_() {
    ;
}

// TODO: implement
void LinkedList::deepCopy_() {
    ;
}

// TODO: implement
void LinkedList::copy() {
    ;
}

// Returns a vector containing all elements of the list
std::vector<int> LinkedList::toVector() {
    std::vector<int> list;
    LLNode* cur = head_;
    while(cur != nullptr) {
        list.push_back(cur->getVal());
        cur = cur->next;
    }
    return list;
}

// Print list to std out
void LinkedList::print() {
    std::vector<int> list = toVector();
    for (auto& e : list) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;
}
