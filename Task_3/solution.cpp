#include "func.h"
#include <iostream>
void Task_3_Solution() {
    char* str1 = new char[20000], *str2 = new char[20000];
    int c1, c2;
    std::cout << "Введите первую строку(длина не более 10000 символов).\n";
    getchar();
    c1 = input_str(str1);
    std::cout << "Введите вторую строку(длина не более 10000 символов).\n";
    c2 = input_str(str2);
    str_comp(str1, c1, str2, c2);
    delete[] str1;
    delete[] str2;
    str1 = nullptr;
    str2 = nullptr;
}