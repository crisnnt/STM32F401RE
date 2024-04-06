#include <stdio.h>

int main() {
    float nhiet_do;

    printf("Nhap nhiet do (do C): ");
    scanf("%f", &nhiet_do);

    if (nhiet_do < 0) {
        printf("Thoi tiet lanh cong.\n");
    } else if (nhiet_do >= 0 && nhiet_do < 10) {
        printf("Thoi tiet rat lanh.\n");
    } else if (nhiet_do >= 10 && nhiet_do < 20) {
        printf("Thoi tiet lanh.\n");
    } else if (nhiet_do >= 20 && nhiet_do < 30) {
        printf("Thoi tiet tuyet voi.\n");
    } else if (nhiet_do >= 30 && nhiet_do < 40) {
        printf("Thoi tiet nong.\n");
    } else {
        printf("Thoi tiet rat nong.\n");
    }

    return 0;
}

