#include <stdio.h>

// Ð?nh nghia c?u trúc ngày sinh
struct ngaysinh {
    int ngay;
    int thang;
    int nam;
};

// Ð?nh nghia c?u trúc nhân viên
struct nhanvien {
    char ten[50];
    int id;
    float luong;
    struct ngaysinh dob; // Thêm thành ph?n ki?u c?u trúc ngaysinh
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

