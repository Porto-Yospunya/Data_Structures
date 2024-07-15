#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    printf("===================== For loop ===================\n");

    // for loop
    // for (statement1 ; statement2 ; statement3)
    for (int i = 0; i < 3; i++) {
        printf("#%d : Hello World\n", i + 1);
    }

    // for-each  loop
    const double products[4] = {19.99, 299.99, 199.99, 4999.99};
    // for (type variableName : arrayName)
    for (double item : products) {
        printf("Product : $%.2f\n", item);
    }

    printf("==================== While loop ====================\n");

    // while loop
    int i = 5;
    // while (statemant)
    while (i > 0) {
        printf("#%d : Computer Enginerring\n", i);
        --i;
    }

    printf("==================== Do While loop ====================\n");

    // do while loop
    // do {} while (statement);
    do {
        printf("#%d : Learning C++ Language\n", i + 1);
        ++i;
    } while (i < 3);

    return 0;
}