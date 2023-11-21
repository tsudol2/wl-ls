//
// Created by Tyler Sudol on 11/21/23.
//

#include <gtest/gtest.h>
#include "../../src/linkedlist/LinkedList.h"

// TEMP CLASS
class WLLSTest : public testing::Test {
protected:
    void SetUp() override {
        // ll1_.insert(1);
    }

    LinkedList ll0_;
};

// TEMP TEST
TEST_F(WLLSTest, DefaultConstructorEmpty) {
    EXPECT_TRUE(ll0_.isEmpty());
}
