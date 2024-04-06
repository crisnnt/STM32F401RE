#include <stdio.h>
#include <string.h>

struct hocsinh {
    char hoten[25];
    int tuoi;
    char diachi[128];
    float gpa;
};

int main() {
    struct hocsinh hocsinh_array[50];
    int num_hocsinh = 0; 

    int choice;

    while (1) {
        printf("Hay lua chon:\n");
        printf("1. Nhap thong tin hoc sinh\n");
        printf("2. Tim kiem hoc sinh\n");
        printf("3. Thoat\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap thong tin hoc sinh:\n");
                printf("Ho va ten: ");
                scanf("%s", hocsinh_array[num_hocsinh].hoten);
                printf("Tuoi: ");
                scanf("%d", &hocsinh_array[num_hocsinh].tuoi);
                printf("Dia chi: ");
                scanf("%s", hocsinh_array[num_hocsinh].diachi);
                printf("GPA: ");
                scanf("%f", &hocsinh_array[num_hocsinh].gpa);
                num_hocsinh++; 
                break;
            case 2:
                char search_name[25];
                printf("Nhap ten hoc sinh can tim kiem: ");
                scanf("%s", search_name);
                for (int i = 0; i < num_hocsinh; i++) {
                    if (strcmp(hocsinh_array[i].hoten, search_name) == 0) {
                        printf("Thong tin cua hoc sinh:\n");
                        printf("Ho va ten: %s\n", hocsinh_array[i].hoten);
                        printf("Tuoi: %d\n", hocsinh_array[i].tuoi);
                        printf("Dia chi: %s\n", hocsinh_array[i].diachi);
                        printf("GPA: %.2f\n", hocsinh_array[i].gpa);
                        break; 
                    }
                }
                break;
            case 3:
                printf("Thoat chuong trinh\n");
                return 0; 
            default:
                printf("Lua chon khong hop le!\n");
        }
        printf("\n----------------------------\n");
    }

    return 0;
}

