#include <stdio.h>

int main() {
    float chieu_dai, chieu_rong, chu_vi, dien_tich;

    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%f", &chieu_dai);
    printf("Nhap chieu rong cua hinh chu nhat: ");
    scanf("%f", &chieu_rong);

    chu_vi = 2 * (chieu_dai + chieu_rong);
    dien_tich = chieu_dai * chieu_rong;

    printf("Chu vi cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f.\n", chieu_dai, chieu_rong, chu_vi);
    printf("Dien tich cua hinh chu nhat co chieu dai %.1f va chieu rong %.1f la %.1f.\n", chieu_dai, chieu_rong, dien_tich);

    return 0;
}

