//
// Created by Tyler Sudol on 11/18/23.
//

#include "LinkedList.h"
#include <iostream>
#include <vector>

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

// Private helper function, recursively deletes the LinkedList and frees memory
void LinkedList::recursiveDelete_(LLNode* node) {
    if (node->next != nullptr) {
        recursiveDelete_(node->next);
    }
    delete node;
}

// Destructor
LinkedList::~LinkedList() {
    if (head_) {
        recursiveDelete_(head_);
    }
}

// Helper function copies the LinkedList provided as an argument,
// performs a deep copy and returns the reference to the new LinkedList
void LinkedList::copyList_(const LinkedList &other) {
    if (other.head_ == nullptr) {
        head_ = tail_ = nullptr;
        size_ = 0;
        return;
    } else {
        head_ = new LLNode(other.head_->val);
        LLNode* cur = head_;
        LLNode* other_next = other.head_->next;

        while(other_next) {
            LLNode* cur_next = new LLNode(other_next->val);
            cur->next = cur_next;
            other_next = other_next->next;
            cur = cur_next;
        }

        cur->next = nullptr;
        tail_ = cur;
        size_ = other.size_;
    }
}

// Copy constructor, performs a deep copy
LinkedList::LinkedList(const LinkedList &other) {
    copyList_(other);
}

// Assignment operator
LinkedList &LinkedList::operator=(const LinkedList &other) {
    if (this != &other) {
        copyList_(other);
    }
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

// Returns a vector containing all elements of the list
std::vector<int> LinkedList::toVector() {
    std::vector<int> list;
    LLNode* cur = head_;
    while(cur != nullptr) {
        list.push_back(cur->val);
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
