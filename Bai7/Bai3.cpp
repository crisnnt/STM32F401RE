#include <stdio.h>
#include <stdbool.h>

int main() {
    const int MAX = 100;
    bool primes[MAX + 1]; 
    int soNguyenTo[MAX + 1]; 
    int soLuong = 0; 

    for (int i = 0; i <= MAX; ++i) {
        primes[i] = true;
    }

    soNguyenTo[soLuong++] = 2;
    soNguyenTo[soLuong++] = 3;

    for (int p = 5; p * p <= MAX; p += 6) {
        if (primes[p]) {
            soNguyenTo[soLuong++] = p;
            for (int i = p * p; i <= MAX; i += p) {
                primes[i] = false;
            }
        }
        if (primes[p + 2]) {
            soNguyenTo[soLuong++] = p + 2;
            for (int i = (p + 2) * (p + 2); i <= MAX; i += (p + 2)) {
                primes[i] = false;
            }
        }
    }

    printf("Cac so nguyen to trong khoang tu 1 den 100:\n");
    for (int i = 0; i < soLuong; ++i) {
        printf("%d ", soNguyenTo[i]);
    }
    printf("\n");

    return 0;
}

