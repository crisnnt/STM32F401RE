#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    int sum;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Tong cua hai so la: %d\n", sum);

    return 0;
}

