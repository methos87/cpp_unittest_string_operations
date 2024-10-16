#include "string_operations.h"
#include <gtest/gtest.h>

TEST(StringOperationsTest, Concatenate) {
    StringOperations strOps;
    EXPECT_EQ(strOps.concatenate("Hello", " World"), "Hello World");
    EXPECT_EQ(strOps.concatenate("Számító", "gép"), "Számítógép");
    EXPECT_EQ(strOps.concatenate("Ez egy", " teszt!"), "Ez egy teszt!");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}