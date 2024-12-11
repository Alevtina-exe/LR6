#include <iostream>
int piv(char* arr, int a, int b) {
	int p = arr[b], m = a - 1;
	for(int i = a; i < b; i++) {
		if(arr[i] < p) {
			m++;
			std::swap(arr[i], arr[m]);
		}
	}
	std::swap(arr[m+1], arr[b]);
	return m+1;
}
void str_sort(char* arr, int a, int b) {
	if(a < b){
	int m = piv(arr, a, b);
    str_sort(arr, a, m - 1);
	str_sort(arr, m + 1, b);
	}
}
int str_comp(char* s1, int c1, char* s2, int c2) {
    if(c1 != c2) {
        std::cout << "Строки не являются анаграммами!\n";
        return 0;
    }
    str_sort(s1, 0, c1 - 1);
    str_sort(s2, 0, c2 - 1);
    for(int i = 0; i < c1; i++) {
        if(s1[i] != s2[i]) {
            std::cout << "Строки не являются анаграммами!\n";
            return 0;
        }
    }
    std::cout << "Строки являются анаграммами.\n";
    return 1;
}
