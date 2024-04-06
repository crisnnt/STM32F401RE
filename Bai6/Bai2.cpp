#include <stdio.h>

int main() {
    int so_can_doan, doan;
    
    so_can_doan = 65; 
    
    
    printf("So can doan la so co 2 chu so.\n");
    
    do {
        printf("Nhap so doan cua ban: ");
        scanf("%d", &doan);
        
        if (doan != so_can_doan) {
            printf("Ban da doan sai. Hay thu lai!\n");
        }
    } while (doan != so_can_doan);

    printf("Xin chuc mung, ban da doan dung!\n");

    return 0;
}

