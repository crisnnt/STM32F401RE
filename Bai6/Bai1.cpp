#include <stdio.h>

int main() {
    int so_tu_nhien, i;

    printf("Nhap mot so tu nhien: ");
    scanf("%d", &so_tu_nhien);

    printf("Cac so chan tu 1 den %d la:\n", so_tu_nhien);
    for (i = 1; i <= so_tu_nhien; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

