#include <stdio.h>
#include <stdbool.h>

bool compareStrings(const char *str1, const char *str2) {
    const char *ptr1 = str1;
    const char *ptr2 = str2;

    while (*ptr1 != '\0' || *ptr2 != '\0') {
        if (*ptr1 != *ptr2)
            return false;
        ptr1++;
        ptr2++;
    }
    return true;
}

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hello";

    if (compareStrings(str1, str2))
        printf("Hai chuoi giong nhau.\n");
    else
        printf("Hai chuoi khong giong nhau.\n");

    return 0;
}

