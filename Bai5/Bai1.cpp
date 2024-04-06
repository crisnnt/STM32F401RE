#include <stdio.h>

int main() {
    float so_thu_nhat, so_thu_hai;

    printf("Nhap so thu nhat: ");
    scanf("%f", &so_thu_nhat);
    printf("Nhap so thu hai: ");
    scanf("%f", &so_thu_hai);

    if ((so_thu_nhat == (int)so_thu_nhat) && (so_thu_hai == (int)so_thu_hai)) {
        printf("Ca hai so deu la so nguyen.\n");
    } else {
        printf("It nhat mot trong hai so khong phai la so nguyen.\n");
    }

    if (so_thu_nhat > so_thu_hai) {
        printf("So thu nhat lon hon so thu hai.\n");
    } else if (so_thu_nhat < so_thu_hai) {
        printf("So thu nhat nho hon so thu hai.\n");
    } else {
        printf("Hai so bang nhau.\n");
    }

    return 0;
}

