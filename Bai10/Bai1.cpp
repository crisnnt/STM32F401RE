#include <stdio.h>

struct nhanvien {
    char ten[50];
    int id;
    float luong;
};

int main() {
    struct nhanvien nv;

    printf("Nhap ten nhan vien: ");
    scanf("%s", nv.ten);

    printf("Nhap ID nhan vien: ");
    scanf("%d", &nv.id);

    printf("Nhap luong nhan vien: ");
    scanf("%f", &nv.luong);

    printf("\nThong tin chi tiet cua nhan vien:\n");
    printf("Ten: %s\n", nv.ten);
    printf("ID: %d\n", nv.id);
    printf("Luong: %.2f\n", nv.luong);

    return 0;
}

