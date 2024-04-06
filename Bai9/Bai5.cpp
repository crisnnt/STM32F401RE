#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10;
    int *ptr1, *ptr2, temp;

    ptr1 = &num1;
    ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Sau khi hoan doi:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

