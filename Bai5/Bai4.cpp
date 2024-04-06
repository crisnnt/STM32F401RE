#include <stdio.h>

#define LUONG_CO_BAN 12.00
#define LUONG_LAM_THEM 18.00
#define THUE_1 0.15
#define THUE_2 0.20
#define THUE_3 0.25
#define GIO_LAM_VIEC_BINH_THUONG 40

int main() {
    float so_gio_lam_viec, luong_gross, luong_net, thue;

    printf("Nhap so gio lam viec: ");
    scanf("%f", &so_gio_lam_viec);

    if (so_gio_lam_viec <= GIO_LAM_VIEC_BINH_THUONG) {
        luong_gross = so_gio_lam_viec * LUONG_CO_BAN;
    } else {
        luong_gross = GIO_LAM_VIEC_BINH_THUONG * LUONG_CO_BAN + (so_gio_lam_viec - GIO_LAM_VIEC_BINH_THUONG) * LUONG_LAM_THEM;
    }

    if (luong_gross <= 300) {
        thue = luong_gross * THUE_1;
    } else if (luong_gross > 300 && luong_gross <= 450) {
        thue = luong_gross * THUE_2;
    } else {
        thue = luong_gross * THUE_3;
    }

    luong_net = luong_gross - thue;

    printf("Luong gross: $%.2f\n", luong_gross);
    printf("Thue: $%.2f\n", thue);
    printf("Luong net: $%.2f\n", luong_net);

    return 0;
}

