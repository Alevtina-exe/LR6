#include <gtest/gtest.h>
#include "func.h"
TEST(str_comp, one_letter_NE) {
    char s1[] = "a", s2[] = "b";
    EXPECT_FALSE(str_comp(s1, 1, s2, 1));
}
TEST(str_comp, one_letter_EQ) {
    char s1[] = "a", s2[] = "a";
    EXPECT_TRUE(str_comp(s1, 1, s2, 1));
}
TEST(str_comp, many_letters_NE) {
    char s1[] = "abcd", s2[] = "beyw";
    EXPECT_FALSE(str_comp(s1, 4, s2, 4));
}
TEST(str_comp, many_letters_EQ) {
    char s1[] = "abcd", s2[] = "bcad";
    EXPECT_TRUE(str_comp(s1, 4, s2, 4));
}
TEST(str_comp, diff_num_of_letters) {
    char s1[] = "abcvyvd", s2[] = "beyw";
    EXPECT_FALSE(str_comp(s1, 7, s2, 4));
}
TEST(str_comp, caps_many_letters_NE) {
    char s1[] = "DUER", s2[] = "WEQW";
    EXPECT_FALSE(str_comp(s1, 4, s2, 4));
}
TEST(str_comp, caps_many_letters_EQ) {
    char s1[] = "DUER", s2[] = "REDU";
    EXPECT_TRUE(str_comp(s1, 4, s2, 4));
}
TEST(str_comp, diff_reg_many_letters_NE) {
    char s1[] = "aBcDe", s2[] = "EfDsW";
    EXPECT_FALSE(str_comp(s1, 5, s2, 5));
}
TEST(str_comp, diff_reg_many_letters_EQ) {
    char s1[] = "aBcDe", s2[] = "dAbEC";
    EXPECT_TRUE(str_comp(s1, 5, s2, 5) + 1);
}
TEST(str_comp, repeated_letters) {
    char s1[] = "aAaBbB", s2[] = "AAbBBb";
    EXPECT_FALSE(str_comp(s1, 6, s2, 6));
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
//g++ -o test test.cpp functions.cpp -lgtest -lpthread