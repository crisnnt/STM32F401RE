#include <stdio.h>

int main() {
    int so_thu_nhat, so_thu_hai, so_thu_ba, so_thu_tu;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &so_thu_nhat);
    printf("Nhap so thu hai: ");
    scanf("%d", &so_thu_hai);
    printf("Nhap so thu ba: ");
    scanf("%d", &so_thu_ba);
    printf("Nhap so thu tu: ");
    scanf("%d", &so_thu_tu);

    printf("Binh phuong cua so thu nhat: %d\n", so_thu_nhat * so_thu_nhat);
    printf("Binh phuong cua so thu hai: %d\n", so_thu_hai * so_thu_hai);
    printf("Binh phuong cua so thu ba: %d\n", so_thu_ba * so_thu_ba);
    printf("Binh phuong cua so thu tu: %d\n", so_thu_tu * so_thu_tu);

    return 0;
}

