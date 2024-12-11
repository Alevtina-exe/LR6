#include <iostream>
int exit_status_input() {
    int a;
    while (true) {
        while (!(std::cin >> a) || (std::cin.peek() != '\n')) {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Неверный формат ввода.\n";
        }
        if (a == 2 || a == 1) return a;
        else std::cout << "Неверный формат ввода.\n";
    }
}
void input_str(char* str) {
    while(true) {
        int i = 0;
        str[0] = getchar();
        while(str[i] != '\n' && i < 80) {
            if(!(str[i] == -48 || str[i] == -47)) {
                i++;
            }
            str[i] = getchar();
        }
        if(str[i] != '\n') {
            std::cout << "Превышено количество символов. Введите строку заново." <<std::endl;
            while(getchar() != '\n');
        }
        else {
            str[i] = '\0';
            return;
        }
    }
}
int int_input() {
    int a;
    while (true) {
        while (!(std::cin >> a) || (std::cin.peek() != '\n')) {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "Неверный формат ввода. Введите целое число от 1 до 80.\n";
        }
        if (a > 0 && a <= 80) return a;
        std::cout << "Неверный формат ввода. Введите целое число от 1 до 80.\n";
    }
}