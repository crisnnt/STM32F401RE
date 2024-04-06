#include <stdio.h>

int *search(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*arr == key) {
            return arr; 
        }
        arr++; 
    }
    return NULL; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Nhap phan tu can tim kiem: ");
    scanf("%d", &key);

    int *result = search(arr, size, key);

    if (result != NULL) {
        printf("Tim thay phan tu %d tai vi tri %ld trong mang.\n", key, result - arr);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", key);
    }

    return 0;
}

