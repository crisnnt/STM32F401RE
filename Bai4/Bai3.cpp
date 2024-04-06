#include <stdio.h>

int main() {
    int so_phut;
    
    printf("Nhap so phut: ");
    scanf("%d", &so_phut);

    int so_ngay = so_phut / (24 * 60);
    int so_nam = so_ngay / 365;
    int so_ngay_con_lai = so_ngay % 365;

    if ((so_nam + 1) % 4 == 0) {
        if (so_ngay_con_lai >= 366) {
            so_ngay_con_lai -= 366;
            so_nam += 1;
        }
    } else {
        if (so_ngay_con_lai >= 365) {
            so_ngay_con_lai -= 365;
            so_nam += 1;
        }
    }

    printf("Tuong duong voi %d nam va %d ngay.\n", so_nam, so_ngay_con_lai);

    return 0;
}

