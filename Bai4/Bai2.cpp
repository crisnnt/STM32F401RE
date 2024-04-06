#include <stdio.h>

int main() {
    int num;

    printf("Nhap mot so bat ky: ");
    scanf("%d", &num);

    int new_num = num | (1 << 4);

    printf("Sau khi dat bit thu 5 thanh bit 1: %d\n", new_num);

    return 0;
}

