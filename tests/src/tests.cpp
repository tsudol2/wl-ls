//
// Created by Tyler Sudol on 11/18/23.
//

#include <gtest/gtest.h>
#include "../../src/linkedlist/LinkedList.h"

TEST(WLLSTestSuite, LinkedList){
    LinkedList ll(1);
    std::vector<int> ll_vec = {1};
    EXPECT_EQ(ll.toVector(), ll_vec);

    ll.insert(2);
    ll.insert(3);
    ll_vec.push_back(2);
    ll_vec.push_back(3);
//    ll.print();
    EXPECT_EQ(ll.toVector(), ll_vec);
}
