#include <stdio.h>

// �?nh nghia c?u tr�c ng�y sinh
struct ngaysinh {
    int ngay;
    int thang;
    int nam;
};

// �?nh nghia c?u tr�c nh�n vi�n
struct nhanvien {
    char ten[50];
    int id;
    float luong;
    struct ngaysinh dob; // Th�m th�nh ph?n ki?u c?u tr�c ngaysinh
};

int main() {
    struct nhanvien nv;

    printf("Nhap ten nhan vien: ");
    scanf("%s", nv.ten);

    printf("Nhap ID nhan vien: ");
    scanf("%d", &nv.id);

    printf("Nhap luong nhan vien: ");
    scanf("%f", &nv.luong);

    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &nv.dob.ngay, &nv.dob.thang, &nv.dob.nam);

    printf("\nThong tin chi tiet cua nhan vien:\n");
    printf("Ten: %s\n", nv.ten);
    printf("ID: %d\n", nv.id);
    printf("Luong: %.2f\n", nv.luong);
    printf("Ngay sinh: %02d/%02d/%d\n", nv.dob.ngay, nv.dob.thang, nv.dob.nam);

    return 0;
}

