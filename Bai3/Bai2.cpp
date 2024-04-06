#include <stdio.h>

// �?nh nghia enum cho c�c c�ng ty
enum Company {
    Google,
    Facebook,
    Xerox,
    Yahoo,
    Ebay,
    Microsoft
};

int main() {
    // S? d?ng enum
    enum Company company1 = Google;
    enum Company company2 = Facebook;

    // In ra gi� tr? c?a c�c c�ng ty
    printf("Cac cong ty:\n");
    printf("1. Google\n");
    printf("2. Facebook\n");
    printf("3. Xerox\n");
    printf("4. Yahoo\n");
    printf("5. eBay\n");
    printf("6. Microsoft\n");

    // In ra t�n c?a company1 v� company2
    printf("\nTen cua company1: ");
    switch (company1) {
        case Google:
            printf("Google\n");
            break;
        case Facebook:
            printf("Facebook\n");
            break;
        case Xerox:
            printf("Xerox\n");
            break;
        case Yahoo:
            printf("Yahoo\n");
            break;
        case Ebay:
            printf("eBay\n");
            break;
        case Microsoft:
            printf("Microsoft\n");
            break;
    }

    printf("Ten cua company2: ");
    switch (company2) {
        case Google:
            printf("Google\n");
            break;
        case Facebook:
            printf("Facebook\n");
            break;
        case Xerox:
            printf("Xerox\n");
            break;
        case Yahoo:
            printf("Yahoo\n");
            break;
        case Ebay:
            printf("eBay\n");
            break;
        case Microsoft:
            printf("Microsoft\n");
            break;
    }

    return 0;
}

