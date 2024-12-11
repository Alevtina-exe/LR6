#include "func.h"
#include <iostream>
void Task_1_Solution() {
    std::cout << "Введите 1, если хотите сгенерировать строку, или 2, чтобы ввести строку.\n";
    int choice = exit_status_input();
    char* str = new char[161];
    if(choice % 2) {
        std::cout << "Введите количество символов в строке: ";
        int N = int_input();
        str_generate(str, N);
        std::cout << "Сгенерированная строка:\n" << str << std::endl;
    }
    else {
        std::cout << "Введите строку (длина строки не более 80 символов):\n";
        getchar();
        input_str(str);
    }
    char* sk = new char[9]{'(', ')', '{', '}', '[', ']', '<', '>', '\0'};
    std::cout << "Количество скобок разного вида:\n";
    for(int i = 0; i < 7; i += 2) {
        char_count(str, sk[i]);
        std::cout << ",\t";
        char_count(str, sk[i + 1]);
        std::cout << ".\n";
    }
    delete[] str;
    delete[] sk;
    sk = nullptr;
    str = nullptr;
}
