#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    printf("===================== For loop ===================\n");

    // for loop
    for (int i = 0; i < 3; i++) {
        printf("#%d : Hello World\n", i + 1);
    }

    printf("==================== While loop ====================\n");

    // while loop
    int i = 5;
    while (i > 0) {
        printf("#%d : Computer Enginerring\n", i);
        --i;
    }

    printf("==================== Do While loop ====================\n");

    // do while loop
    while (i < 3) {
        printf("#%d : Learning C++ Language\n", i + 1);
        ++i;
    }

    return 0;
}