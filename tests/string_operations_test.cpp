#include "string_operations.h"
#include <gtest/gtest.h>

TEST(StringOperationsTest, Concatenate) {
    StringOperations strOps;
    EXPECT_EQ(strOps.concatenate("Hello", " World"), "Hello World");
    EXPECT_EQ(strOps.concatenate("Számító", "gép"), "Számítógép");
    EXPECT_EQ(strOps.concatenate("Ez egy", " teszt!"), "Ez egy teszt!");
}

TEST(StringOperationsTest, Reverse) {
    StringOperations strOps;
    EXPECT_EQ(strOps.reverse("abcdef"), "fedcba");
    EXPECT_EQ(strOps.reverse("0123456789"), "9876543210");
    EXPECT_EQ(strOps.reverse(""), "");
}

TEST(StringOperationsTest, Length) {
    StringOperations strOps;
    EXPECT_EQ(strOps.length("abcdef"), 6);
    EXPECT_EQ(strOps.length("0123456789"), 10);
    EXPECT_EQ(strOps.length(""), 0);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}