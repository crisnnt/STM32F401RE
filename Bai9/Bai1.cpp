#include <stdio.h>

int main() {
    int intValue = 10;
    float floatValue = 3.14;
    char charValue = 'A';

    int *intPtr = &intValue;
    float *floatPtr = &floatValue;
    char *charPtr = &charValue;

    printf("Dia chi va gia tri cua bien con tro kieu int:\n");
    printf("Dia chi: %p\n", (void *)intPtr);
    printf("Gia tri: %d\n\n", *intPtr);

    printf("Dia chi va gia tri cua bien con tro kieu float:\n");
    printf("Dia chi: %p\n", (void *)floatPtr);
    printf("Gia tri: %.2f\n\n", *floatPtr);

    printf("Dia chi va gia tri cua bien con tro kieu char:\n");
    printf("Dia chi: %p\n", (void *)charPtr);
    printf("Gia tri: %c\n\n", *charPtr);

    return 0;
}

