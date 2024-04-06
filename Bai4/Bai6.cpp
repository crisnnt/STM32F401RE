#include <stdio.h>

int main() {
    float so_thu_nhat, so_thu_hai, so_thu_ba, so_thu_tu;
    float trung_binh;

    printf("Nhap so thu nhat: ");
    scanf("%f", &so_thu_nhat);
    printf("Nhap so thu hai: ");
    scanf("%f", &so_thu_hai);
    printf("Nhap so thu ba: ");
    scanf("%f", &so_thu_ba);
    printf("Nhap so thu tu: ");
    scanf("%f", &so_thu_tu);

    trung_binh = (so_thu_nhat + so_thu_hai + so_thu_ba + so_thu_tu) / 4;

    printf("Trung binh cong cua 4 so la: %.2f\n", trung_binh);

    return 0;
}

