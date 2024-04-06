#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    int length = strlen(str);
    char *ptr = str + length - 1; 

    printf("Chuoi dao nguoc: ");
    while (ptr >= str) { 
        printf("%c", *ptr);
        ptr--; 
    }
    printf("\n");

    return 0;
}

