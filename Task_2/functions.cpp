#include <cstring>
#include <iostream>
#include "func.h"
int N;
void rec_str(char* str, char* str1, int a, int b) {
    int i;
    for(i = 0; a < b; a++, i++) {
        str1[i] = str[a];
    }
    str1[i] = '\0';
}
void str_comp(char* str1, char* str2) {
    if(str2[0] == '\0' || strlen(str1) != strlen(str2)) {
        return;
    }
    if(!strcasecmp(str1, str2)) {
        str2[0] = '\0';
    }
}
char** solution(char* main_str) {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int i = 0, count = 0;
    char** str = new char*[10000];
    while(main_str[i] != '\0') {
        if(isalpha(main_str[i])) {
            int j;
            for(j = i; isalpha(main_str[j]); j++);
            if(tolower(main_str[i]) == tolower(main_str[j - 1])) {
                str[count] = new char[j - i + 1];
                rec_str(main_str, str[count], i, j);
                count++;
            }
            i = j - 1;
        }
        else if(main_str[i] < 0) {
            int j;
            for(j = i; main_str[j] < 0; j++);
            if(main_str[i + 1] == main_str[j - 1] || abs(main_str[i + 1] - main_str[j - 1]) == 32)  {
                str[count] = new char[j - i + 1];
                rec_str(main_str, str[count], i, j);
                count++;
            }
            i = j - 1;
        }
        i++;
    }
    for(i = 0; i < count; i++) {
        if(str[i][0] != '\0') {
            std::cout << str[i] << " ";
            for(int j = i + 1; j < count ; j++) {
                str_comp(str[i], str[j]);
            }
        }
    }
    N = count;
    if(!count) {
        std::cout << "Подходящих слов не обнаружено!";
    }
    return str;   
}
void delete_array(char** str, int n) {
    for(int i = 0; i < n; i++) {
        delete[] str[i];
        str[i] = nullptr;
    }
    delete[] str;
    str = nullptr;
}