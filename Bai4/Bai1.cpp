#include <stdio.h>

int main() {
    int num;

    printf("Nhap mot so bat ky: ");
    scanf("%d", &num);

    int bit_thu_3 = (num >> 2) & 1;

    if (bit_thu_3 == 0) {
        printf("Bit thu 3 la bit 0.\n");
    } else {
        printf("Bit thu 3 la bit 1.\n");
    }

    return 0;
}

