#include <stdio.h>

#define YEARS 3
#define MONTHS 12

int main() {
    int mua[YEARS][MONTHS] = {
        {45, 38, 60, 65, 70, 80, 120, 125, 100, 70, 55, 50},    
        {50, 40, 65, 70, 75, 85, 115, 120, 95, 75, 60, 55},     
        {48, 42, 62, 67, 72, 82, 118, 123, 98, 78, 58, 53}      
    };

    printf("Luong mua theo nam:\n");
    for (int i = 0; i < YEARS; ++i) {
        printf("Nam %d: ", i + 1);
        for (int j = 0; j < MONTHS; ++j) {
            printf("%d mm ", mua[i][j]);
        }
        printf("\n");
    }

    printf("\nLuong mua trung binh cua moi thang:\n");
    for (int j = 0; j < MONTHS; ++j) {
        int tong = 0;
        for (int i = 0; i < YEARS; ++i) {
            tong += mua[i][j];
        }
        float trungBinh = (float)tong / YEARS;
        printf("Thang %d: %.2f mm\n", j + 1, trungBinh);
    }

    return 0;
}

