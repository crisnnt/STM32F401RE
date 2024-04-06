#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long result = 1;
    int i;
    for (i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    unsigned long long fact;

    printf("Nhap so can tinh giai thua: ");
    scanf("%d", &number);

    fact = factorial(number);

    printf("Giai thua cua %d la: %llu\n", number, fact);

    return 0;
}

