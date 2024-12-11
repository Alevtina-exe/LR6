#include <gtest/gtest.h>
#include "func.h"
char sk[8] = {'(', ')', '{', '}', '[', ']', '<', '>'};

TEST(char_count, no_braces) {
    char str[] = "sgdhfhgasfdujawyfz";
    for(int i = 0; i < 8; i ++) {
        EXPECT_EQ(char_count(str, sk[i]), 0);
    }
}
TEST(char_count, only_round) {
    char str[] = "(shdaigw)";
    for(int i = 0; i < 8; i ++) {
        if(i == 0 || i == 1) {
            EXPECT_EQ(char_count(str, sk[i]), 1);
        }
        else {
            EXPECT_EQ(char_count(str, sk[i]), 0);
        }
    }     
}
TEST(char_count, only_square) {
    char str[] = "] fjs [";
    for(int i = 0; i < 8; i ++) {
        if(i == 4 || i == 5) {
            EXPECT_EQ(char_count(str, sk[i]), 1);
        }
        else {
            EXPECT_EQ(char_count(str, sk[i]), 0);
        }
    }     
}
TEST(char_count, only_figure) {
    char str[] = "dkjrhgirsu{slejhfisu}csjkdh";
    for(int i = 0; i < 8; i ++) {
        if(i == 2 || i == 3) {
            EXPECT_EQ(char_count(str, sk[i]), 1);
        }
        else {
            EXPECT_EQ(char_count(str, sk[i]), 0);
        }
    }     
}
TEST(char_count, only_triangle) {
    char str[] = "dokpe<sdkp<sodp>owpdk";
    for(int i = 0; i < 8; i ++) {
        if(i == 6) {
            EXPECT_EQ(char_count(str, sk[i]), 2);
        }
        else if(i == 7) {
            EXPECT_EQ(char_count(str, sk[i]), 1);
        }
        else {
            EXPECT_EQ(char_count(str, sk[i]), 0);
        }
    }     
}
TEST(char_count, all_types1) {
    char str[] = "{[(<>)]}";
    for(int i = 0; i < 8; i ++) {
        EXPECT_EQ(char_count(str, sk[i]), 1);
    }    
}
TEST(char_count, all_types2) {
    char str[] = "{<>[{}(<>[])]()}";
    for(int i = 0; i < 8; i ++) {
        EXPECT_EQ(char_count(str, sk[i]), 2);
    }    
}
TEST(char_count, random_types1) {
    char str[] = "(hiuguyftfhg(uuyfcgf} hvyf< ]";
    EXPECT_EQ(char_count(str, sk[0]), 2);
    EXPECT_EQ(char_count(str, sk[1]), 0);
    EXPECT_EQ(char_count(str, sk[2]), 0);
    EXPECT_EQ(char_count(str, sk[3]), 1);
    EXPECT_EQ(char_count(str, sk[4]), 0);
    EXPECT_EQ(char_count(str, sk[5]), 1);
    EXPECT_EQ(char_count(str, sk[6]), 1);
    EXPECT_EQ(char_count(str, sk[7]), 0);
}
TEST(char_count, random_types2) {
    char str[] = "   { }}} ))  ()() [[[]]]";
    EXPECT_EQ(char_count(str, sk[0]), 2);
    EXPECT_EQ(char_count(str, sk[1]), 4);
    EXPECT_EQ(char_count(str, sk[2]), 1);
    EXPECT_EQ(char_count(str, sk[3]), 3);
    EXPECT_EQ(char_count(str, sk[4]), 3);
    EXPECT_EQ(char_count(str, sk[5]), 3);
    EXPECT_EQ(char_count(str, sk[6]), 0);
    EXPECT_EQ(char_count(str, sk[7]), 0);
}
TEST(char_count, random_types3) {
    char str[] = "hgipko<hgi< gi>()()()(999[])";
    EXPECT_EQ(char_count(str, sk[0]), 4);
    EXPECT_EQ(char_count(str, sk[1]), 4);
    EXPECT_EQ(char_count(str, sk[2]), 0);
    EXPECT_EQ(char_count(str, sk[3]), 0);
    EXPECT_EQ(char_count(str, sk[4]), 1);
    EXPECT_EQ(char_count(str, sk[5]), 1);
    EXPECT_EQ(char_count(str, sk[6]), 2);
    EXPECT_EQ(char_count(str, sk[7]), 1);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
//g++ -o test test.cpp functions.cpp -lgtest -lpthread