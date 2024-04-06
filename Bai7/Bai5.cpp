#include <stdio.h>

#define MAX_SIZE 101

void sapXepGiamDan(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sapXepTangDan(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int n;

    do {
        printf("Nhap so luong phan tu (toi da 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);

    printf("Nhap cac phan tu cua day so:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Bu?c 4: S?p x?p theo chi?u gi?m d?n
    sapXepGiamDan(arr, n);

    printf("\nDay so sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sapXepTangDan(arr, n);

    printf("\nDay so sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

