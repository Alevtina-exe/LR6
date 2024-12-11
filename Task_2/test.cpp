#include <gtest/gtest.h>
#include "func.h"
TEST(solution, no_words) {
    char str[] = "abb bbf ccd";
    char** A = solution(str);
    for(int i = 0; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, one_word) {
    char str[] = "aria";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "aria");
    for(int i = 1; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, two_words) {
    char str[] = "aria ohio";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "aria");
    ASSERT_STREQ(A[1], "ohio");
    for(int i = 2; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, one_word_caps) {
    char str[] = "Aria ";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "Aria");
    for(int i = 2; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
}
TEST(solution, leading_space) {
    char str[] = "    Aria ";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "Aria");
    for(int i = 1; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, with_punctuation_marks) {
    char str[] = ".baobab.";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "baobab");
    for(int i = 1; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, one_two_letter_words) {
    char str[] = "a bB CC D";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "a");
    ASSERT_STREQ(A[1], "bB");
    ASSERT_STREQ(A[2], "CC");
    ASSERT_STREQ(A[3], "D");
    for(int i = 4; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, repeated_words) {
    char str[] = "aboba aboba aboba";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "aboba");
    ASSERT_STREQ(A[1], "\0");
    ASSERT_STREQ(A[2], "\0");
    for(int i = 3; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, some_repeated_words) {
    char str[] = "aboba mmm aboba mmm";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "aboba");
    ASSERT_STREQ(A[1], "mmm");
    ASSERT_STREQ(A[2], "\0");
    ASSERT_STREQ(A[3], "\0");
    for(int i = 4; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
TEST(solution, some_repeated_words_with_signs) {
    char str[] = "aboba? wghgh djksj, wow! aboba: yes wow";
    char** A = solution(str);
    ASSERT_STREQ(A[0], "aboba");
    ASSERT_STREQ(A[1], "wow");
    ASSERT_STREQ(A[2], "\0");
    ASSERT_STREQ(A[3], "\0");
    for(int i = 5; i < 10000; i++) {
        ASSERT_EQ(A[i], nullptr);
    }
    delete_array(A, 10000);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
//g++ -o test test.cpp functions.cpp -lgtest -lpthread