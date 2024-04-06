#include <stdio.h>

int main() {
    unsigned int id_nhan_vien, so_gio_lam_viec;
    float tien_luong_moi_gio, tien_luong_thang;

    printf("Nhap ID cua nhan vien: ");
    scanf("%u", &id_nhan_vien);
    printf("Nhap tong so gio lam viec trong thang: ");
    scanf("%u", &so_gio_lam_viec);
    printf("Nhap so tien luong moi gio: ");
    scanf("%f", &tien_luong_moi_gio);

    tien_luong_thang = so_gio_lam_viec * tien_luong_moi_gio;

    printf("ID nhan vien: %u\n", id_nhan_vien);
    printf("Tien luong thang: %.2f\n", tien_luong_thang);

    return 0;
}

