#include <stdio.h>

// Ð?nh nghia enum cho các công ty
enum Company {
    Google,
    Facebook,
    Xerox,
    Yahoo,
    Ebay,
    Microsoft
};

int main() {
    // Khai báo bi?n enum và gán giá tr? ban d?u
    enum Company company1 = Google;

    // In ra tên công ty ban d?u c?a company1
    printf("Ten cua company1 (truoc khi thay doi): ");
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

    // Thay d?i giá tr? c?a company1
    company1 = Microsoft;

    // In ra tên công ty sau khi thay d?i
    printf("\nTen cua company1 (sau khi thay doi): ");
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

    return 0;
}

