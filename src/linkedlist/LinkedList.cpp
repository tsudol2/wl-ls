//
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include "LinkedList.h"

// Default constructor
LinkedList::LinkedList() {
    _head = new LLNode();
}

// Convienence constructor
LinkedList::LinkedList(int val) {
    _head = new LLNode(val);
}

// Print
void LinkedList::print() {
    LLNode* temp = _head; 
  
    // Check for empty list. 
    if (_head == nullptr) { 
        std::cout << "List empty" << std::endl; 
        return; 
    } 
  
    // Traverse the list. 
    while (temp != nullptr) { 
        std::cout << temp->getVal() << " "; 
        temp = temp->getNext(); 
    }
    
    std::cout << std::endl;
}
