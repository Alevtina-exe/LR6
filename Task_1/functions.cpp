#include <iostream>
void str_generate(char* str, int N) {
    int i = 0;
    for(; i < N; i++) {
        str[i] = rand() % 128;
        if(str[i] < 32) {
            i--;
        }
    }
    str[i] = '\0';
}
int char_count(char* str, char c) {
    int count = 0, i = 0;
    while(str[i] != '\0') {
        if(str[i] == c) {
            count++;
        }
        i++;
    }
    std::cout << c << ": " << count;
    return count;
}