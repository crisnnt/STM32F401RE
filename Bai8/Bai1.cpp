#include <stdio.h>
#include <math.h> 

int ucln(int a, int b);
float tuyetDoi(float num);
float canBacHai(unsigned int num);

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

float tuyetDoi(float num) {
    return (num >= 0) ? num : -num;
}

float canBacHai(unsigned int num) {
    return sqrt(num);
}

int main() {
    int a, b;
    float num;

    printf("Nhap hai so nguyen khong am: ");
    scanf("%d %d", &a, &b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln(a, b));

    printf("Nhap mot so thuc: ");
    scanf("%f", &num);

    printf("Gia tri tuyet doi cua %.2f la: %.2f\n", num, tuyetDoi(num));

    unsigned int n;
    printf("Nhap mot so nguyen khong am: ");
    scanf("%u", &n);

    printf("Can bac hai cua %u la: %.2f\n", n, canBacHai(n));

    return 0;
}

