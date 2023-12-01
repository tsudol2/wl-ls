//
// Created by Tyler Sudol on 11/18/23.
//

#include "LinkedList.h"
#include <iostream>
#include <vector>

// Convenience constructor, inserts an integer
LinkedList::LinkedList(int val) {
    head_ = new LLNode(val);
    tail_ = head_;
    size_ = 1;
}

// Convenience constructor, inserts pointer to head of a LL
LinkedList::LinkedList(LLNode* val) {
    head_ = new LLNode(val);
    tail_ = head_;
    size_ = 1;
}

// Private helper function, recursively deletes the LinkedList and frees memory
void LinkedList::recursiveDelete_(LLNode* node) {
    if (node->next() != nullptr) {
        recursiveDelete_(node->next());
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
        if (other.head_->isInt()) {
            head_ = new LLNode(other.head_->valInt());
        } else {
            head_ = new LLNode(other.head_->valLL());
        }
        LLNode *cur = head_;
        LLNode *otherNext = other.head_->next();

        while (otherNext) {
            LLNode* curNext;
            if (otherNext->isInt()) {
                curNext = new LLNode(otherNext->valInt());
            } else {
                curNext = new LLNode(otherNext->valLL());
            }

            cur->next(curNext);
            otherNext = otherNext->next();
            cur = curNext;
        }

        cur->next(nullptr);
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

//
// Int val is inserted at the end of the list
//
LinkedList &LinkedList::insertInt(int val) {
    auto* newNode = new LLNode(val);
    if (isEmpty()) {
        head_ = newNode;
        tail_ = head_;
    } else {
        tail_->next(newNode);
        tail_ = newNode;
    }
    size_ += 1;
    return *this;
}

//
// LinkedList val is inserted at the end of the list
//
LinkedList &LinkedList::insertLL(LLNode* val) {
    auto* newNode = new LLNode(val);
    if (isEmpty()) {
        head_ = newNode;
        tail_ = head_;
    } else {
        tail_->next(newNode);
        tail_ = newNode;
    }
    size_ += 1;
    return *this;
}

// Replace the element at provided index with the provided integer value
LinkedList &LinkedList::replaceAtInt(int index, int value) {
    LLNode* cur = head();
    int i = 0;

    while (cur != nullptr) {
        if (i == index) {
            cur->valInt(value);
        }
        cur = cur->next();
        i++;
    }

    return *this;
}

// Replace the element at provided index with the provided LLNode pointer value
LinkedList &LinkedList::replaceAtLL(int index, LLNode* value) {
    LLNode* cur = head();
    int i = 0;

    while (cur != nullptr) {
        if (i == index) {
            cur->valLL(value);
        }
        cur = cur->next();
        i++;
    }

    return *this;
}

// The integer value stored at the index is returned
int LinkedList::valueAtInt(int index) {
    LLNode* cur = head();
    int i = 0;

    while (cur != nullptr) {
        if (i == index) {
            return cur->valInt();
        }
        cur = cur->next();
        i++;
    }

    // error, value not found
    return -1;
}

// The LLNode pointer at index is returned
LLNode* LinkedList::valueAtLL(int index) {
    LLNode* cur = head();
    int i = 0;

    while (cur != nullptr) {
        if (i == index) {
            return cur->valLL();
        }
        cur = cur->next();
        i++;
    }

    // error, value not found
    return nullptr;
}

// Returns a vector containing all elements of the list stored in their own vector
std::vector<std::vector<int>> LinkedList::toVector() {
    std::vector<std::vector<int>> list;
    LLNode* cur = head();
    while(cur != nullptr) {
        if (cur->isInt()) {
            std::vector<int> elem = {cur->valInt()};
            list.push_back(elem);
        } else {
            // create a temporary LLNode to convert nested list to vector
            LLNode* temp = cur->valLL();
            std::vector<int> elem;
            while (temp != nullptr) {
                int v = temp->valInt();
                elem.push_back(v);
                temp = temp->next();
            }
            list.push_back(elem);
        }
        cur = cur->next();
    }
    return list;
}

// Print list to std out
void LinkedList::print() {
    std::vector<std::vector<int>> list = toVector();
    std::cout << '[';
    for (auto e : list) {
        if (e == list.front() && e.size() > 1) { std::cout << '['; }
        for (auto f : e) {
            std::cout << f;
            if (f != e.back()) { std::cout << ", "; }
        }
        if (e != list.back()) {
            std::cout << ", ";
        } else if (e.size() > 1) {
            std::cout << ']';
        }
    }
    std::cout << ']' << std::endl;
}
