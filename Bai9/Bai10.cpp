#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", ptr + i); 
    }

    
    int max = *ptr; 
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i); 
        }
    }

    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

