//
// Created by Tyler Sudol on 11/18/23.
//

#include <iostream>
#include <gtest/gtest.h>
#include "../../src/linkedlist/LinkedList.h"

class LinkedListTest : public testing::Test {
protected:
    void SetUp() override {
        ll2Vector_.push_back(e);
        ll3Vector_.push_back(ll2Vector_.front());
    }

    LinkedList ll1_;
    LinkedList ll2_ = LinkedList(1);
    LinkedList ll3_ = LinkedList(ll2_.head());
    std::vector<std::vector<int>> ll1Vector_;
    std::vector<std::vector<int>> ll2Vector_;
    std::vector<std::vector<int>> ll3Vector_;
    std::vector<int> e = {1};
    std::vector<int> f = {2};
    std::vector<int> g = {1,2};
};

TEST_F(LinkedListTest, DefaultConstructorEmpty) {
    EXPECT_TRUE(ll1_.isEmpty());
//    ll0_.print();
}

TEST_F(LinkedListTest, DefaultConstructorAddOneElemInt) {
    ll1_.insertInt(1);
    EXPECT_FALSE(ll1_.isEmpty());
//    ll1_.print();
}

TEST_F(LinkedListTest, DefaultConstructorAddOneElemLL) {
    ll1_.insertLL(ll2_.head());
    EXPECT_FALSE(ll1_.isEmpty());
//    ll4_.print();
}

TEST_F(LinkedListTest, ParameterizedConstructorIntInit) {
    EXPECT_FALSE(ll2_.isEmpty());
    EXPECT_EQ(ll2_.toVector(), ll2Vector_);
//    ll2_.print();
}

TEST_F(LinkedListTest, ParameterizedConstructorLLInit) {
    EXPECT_FALSE(ll3_.isEmpty());
    EXPECT_EQ(ll3_.toVector(), ll3Vector_);
//    ll3_.print();
}

TEST_F(LinkedListTest, ParameterizedConstructorAddOneElemInt) {
    ll2_.insertInt(2);
    ll2Vector_.push_back(f);
    EXPECT_FALSE(ll2_.isEmpty());
    EXPECT_EQ(ll2_.toVector(), ll2Vector_);
//    ll4_.print();
}

TEST_F(LinkedListTest, ParameterizedConstructorAddOneElemLL) {
    ll3_.insertLL(ll2_.head());
    ll3Vector_.push_back(e);
    EXPECT_FALSE(ll3_.isEmpty());
    EXPECT_EQ(ll3_.toVector(), ll3Vector_);
}

TEST_F(LinkedListTest, DefaultConstructorToVector) {
    EXPECT_EQ(ll1_.toVector(), ll1Vector_);
}

TEST_F(LinkedListTest, ParameterizedConstructorToVec) {
    EXPECT_EQ(ll2_.toVector(), ll2Vector_);
//    ll2_.print();
}

TEST_F(LinkedListTest, CopyConstructorDefaultConstructorEmpty) {
    LinkedList ll = ll1_;
    EXPECT_EQ(ll.isEmpty(), ll1_.isEmpty());
}

TEST_F(LinkedListTest, CopyConstructorCheckDeepCopy) {
    LinkedList ll = ll1_;
    ll.insertInt(1);
    EXPECT_FALSE(ll.isEmpty() == ll1_.isEmpty());
    EXPECT_FALSE(ll.toVector() == ll1_.toVector());
    EXPECT_EQ(ll.toVector(), ll2Vector_);
}

TEST_F(LinkedListTest, CopyConstructorCheckDeepCopyNestedList) {
    LinkedList ll = ll3_;
    ll.insertLL(ll2_.head());
    ll3Vector_.push_back(e);
    EXPECT_FALSE(ll.size() == ll3_.size());
    EXPECT_FALSE(ll.toVector() == ll3_.toVector());
    EXPECT_EQ(ll.toVector(), ll3Vector_);
}

TEST_F(LinkedListTest, CopyConstructorCheckDeepCopyCont) {
    LinkedList ll(ll2_);
    EXPECT_EQ(ll.toVector(), ll2_.toVector());
}

TEST_F(LinkedListTest, AssignmentOperatorDeepCopy) {
    LinkedList ll;
    ll = ll2_;
    EXPECT_EQ(ll.toVector(), ll2Vector_);
    ll.insertInt(2);
    EXPECT_FALSE(ll.toVector() == ll2Vector_);
}

TEST_F(LinkedListTest, AssignmentOperatorDeepCopyNestedList) {
    LinkedList ll;
    ll = ll3_;
    EXPECT_EQ(ll.toVector(), ll3Vector_);
    ll.insertInt(2);
    EXPECT_FALSE(ll.toVector() == ll3Vector_);
}

TEST_F(LinkedListTest, ValueAtInt) {
    EXPECT_EQ(ll2_.valueAtInt(0), 1);
}

TEST_F(LinkedListTest, ValueAtLL) {
    EXPECT_TRUE(ll3_.valueAtLL(0) == ll2_.head());
}

TEST_F(LinkedListTest, ReplaceAtInt) {
    ll2_.replaceAtInt(0, 5);
    EXPECT_EQ(ll2_.valueAtInt(0), 5);
}

TEST_F(LinkedListTest, RemoveAtLL) {
    LinkedList ll = LinkedList(5);
    ll2_.replaceAtLL(0, ll.head());
    EXPECT_EQ(ll2_.valueAtLL(0), ll.head());
}
