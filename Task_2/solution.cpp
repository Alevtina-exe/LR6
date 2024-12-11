#include "func.h"
#include <iostream>
extern int N;
void Task_2_Solution() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    std::cout << "Введите текст (длина текста не более 20000 символов):\n";
    getchar();
    char* str = new char[20000];
    input_str(str);
    std::cout << "Слова, подходящие условию:\n";
    char** S = solution(str);
    std::cout << std::endl;
    delete_array(S, N);
    delete[] str;
    str = nullptr;
}
