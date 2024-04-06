#include <stdio.h>

int add(int *pnum1, int *pnum2) {
    return (*pnum1 + *pnum2);
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int result;

    result = add(&num1, &num2);

    printf("Tong cua hai so la: %d\n", result);

    return 0;
}

