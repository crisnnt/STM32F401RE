#include <stdio.h>

int main() {
    int so_thu_nhat, so_thu_hai;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &so_thu_nhat);
    printf("Nhap so thu hai: ");
    scanf("%d", &so_thu_hai);
    
    printf("So thu nhat: %d\n", so_thu_nhat);
    printf("So thu hai: %d\n", so_thu_hai);
    
    if (so_thu_hai != 0) {
        int ket_qua = so_thu_nhat / so_thu_hai;
        printf("Ket qua phep chia: %d\n", ket_qua);
    } else {
        printf("Khong the chia cho 0.\n");
    }

    return 0;
}

