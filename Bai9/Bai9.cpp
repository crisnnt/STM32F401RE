#include <stdio.h>

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[3] = {7, 8, 9};
    int temp;

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for (int i = 0; i < 3; i++) {
        temp = *(ptr2 + i);
        *(ptr2 + i) = *(ptr1 + i);
        *(ptr1 + i) = temp;
    }

    printf("Mang 1 sau khi hoan doi: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");

    printf("Mang 2 sau khi hoan doi: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");

    return 0;
}

