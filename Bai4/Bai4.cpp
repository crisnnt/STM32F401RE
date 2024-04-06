#include <stdio.h>

int main() {
    printf("Kich thuoc cua cac kieu du lieu co ban:\n");
    printf("Kieu char: %lu byte\n", sizeof(char));
    printf("Kieu int: %lu byte\n", sizeof(int));
    printf("Kieu long: %lu byte\n", sizeof(long));
    printf("Kieu long long: %lu byte\n", sizeof(long long));
    printf("Kieu float: %lu byte\n", sizeof(float));
    printf("Kieu double: %lu byte\n", sizeof(double));

    return 0;
}

