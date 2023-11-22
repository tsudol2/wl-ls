//
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include <gtest/gtest.h>
#include "../../src/linkedlist/LinkedList.h"

class LinkedListTest : public testing::Test {
protected:
    void SetUp() override {
        ll1_.insert(1);
        ll2_.insert(2);
    }

    LinkedList ll0_;
    LinkedList ll1_;
    LinkedList ll2_ = LinkedList(1);
    std::vector<int> ll1Vector_ = {1};
    std::vector<int> ll2Vector_ = {1,2};
};

TEST_F(LinkedListTest, DefaultConstructorEmpty) {
    EXPECT_TRUE(ll0_.isEmpty());
}

TEST_F(LinkedListTest, DefaultConstructorAddOneElem) {
    EXPECT_FALSE(ll1_.isEmpty());
}

TEST_F(LinkedListTest, ParameterizedConstructorInit) {
    EXPECT_FALSE(ll2_.isEmpty());
}

TEST_F(LinkedListTest, ParameterizedConstructorAddOneElem) {
    EXPECT_FALSE(ll2_.isEmpty());
}

TEST_F(LinkedListTest, DefaultConstructorToVector) {
    EXPECT_EQ(ll1_.toVector(), ll1Vector_);
}

TEST_F(LinkedListTest, ParameterizedConstructorToVec) {
    EXPECT_EQ(ll2_.toVector(), ll2Vector_);
}

TEST_F(LinkedListTest, CopyConstructorDefaultConstructorEmpty) {
    LinkedList ll = ll0_;
    EXPECT_EQ(ll.isEmpty(), ll0_.isEmpty());
}

TEST_F(LinkedListTest, CopyConstructorCheckDeepCopy) {
    LinkedList ll = ll0_;
    ll.insert(1);
    EXPECT_FALSE(ll.isEmpty() == ll0_.isEmpty());
    EXPECT_FALSE(ll.toVector() == ll0_.toVector());
    EXPECT_EQ(ll.toVector(), ll1_.toVector());
}

TEST_F(LinkedListTest, CopyConstructorCheckDeepCopyCont) {
    LinkedList ll = ll2_;
    EXPECT_EQ(ll.toVector(), ll2_.toVector());
}

TEST_F(LinkedListTest, AssignmentOperator) {
    LinkedList ll;
    ll = ll2_;
    EXPECT_EQ(ll.toVector(), ll2_.toVector());
    ll.insert(2);
    ll.print();
    ll2_.print();
}
