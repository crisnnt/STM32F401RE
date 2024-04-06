#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        printf("So lon nhat la: %d\n", *ptr1);
    } else {
        printf("So lon nhat la: %d\n", *ptr2);
    }

    return 0;
}

