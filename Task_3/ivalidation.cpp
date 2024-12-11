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
int input_str(char* str) {
    int i = 0; 
    str[i] = getchar();
    while(str[i] != '\n' && i < 40000) {
        str[i] = tolower(str[i]);
        i++;
        str[i] = getchar();
    }
    str[i] = '\0';
    return i;
}