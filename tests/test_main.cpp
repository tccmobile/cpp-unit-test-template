#include <gtest/gtest.h>

// Example test case
TEST(ExampleTest, BasicAssertions) {
    EXPECT_EQ(1 + 1, 2);
    EXPECT_STRNE("hello", "world");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}