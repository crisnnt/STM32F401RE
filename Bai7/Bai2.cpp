#include <stdio.h>

#define MAX_SIZE 5

int main() {
    int mang[MAX_SIZE];
    int i;

    printf("Nhap %d so:\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("\nCac so theo thu tu nguoc lai:\n");
    for (i = MAX_SIZE - 1; i >= 0; i--) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

