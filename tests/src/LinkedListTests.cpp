//
// Created by Tyler Sudol on 11/18/23.
//
// REMOVE LATER: Note to self, use EXPECT_* when you want to continue
// after failure, ASSERT_* when continuing after failure doesn't make
// sense (e.g., referencing pointers)
//

#include <iostream>
#include <gtest/gtest.h>
#include "../../src/linkedlist/LinkedList.h"

class LinkedListTest : public testing::Test {
protected:
    void SetUp() override {
        ll1_.insert(1);
    }

    LinkedList ll0_;
    LinkedList ll1_;
    LinkedList ll2_ = LinkedList(1);
    std::vector<int> ll1Vec_ = {1};
};

TEST_F(LinkedListTest, DefaultConstructorEmpty) {
    std::cout<< "Yo\n";
    EXPECT_TRUE(ll0_.isEmpty());
}

TEST_F(LinkedListTest, DefaultConstructorAddOneElem) {
    EXPECT_FALSE(ll1_.isEmpty());

    // TODO: further testing
}

TEST_F(LinkedListTest, ParameterizedConstructor) {
    EXPECT_FALSE(ll2_.isEmpty());

    // TODO: further testing
}

// TEST(LLTestSuite, ConvienienceConstructor){
//     LinkedList ll(1);
//     std::vector<int> ll_vec = {1};
//     EXPECT_EQ(ll.toVector(), ll_vec);

//     ll.insert(2);
//     ll.insert(3);
//     ll_vec.push_back(2);
//     ll_vec.push_back(3);
// //    ll.print();
//     EXPECT_EQ(ll.toVector(), ll_vec);
// }
