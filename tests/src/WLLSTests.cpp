//
// Created by Tyler Sudol on 11/21/23.
//

#include <gtest/gtest.h>
#include "../../src/linkedlist/LinkedList.h"

// TEMP CLASS
class WLLSTest : public testing::Test {
protected:
    void SetUp() override {
        ll1_.insert(1);
    }

    LinkedList ll0_;
    LinkedList ll1_;
    LinkedList ll2_ = LinkedList(1);
    std::vector<int> ll1Vec_ = {1};
};

// TEMP TEST
TEST_F(WLLSTest, DefaultConstructorEmpty) {
    EXPECT_TRUE(ll0_.isEmpty());
}
