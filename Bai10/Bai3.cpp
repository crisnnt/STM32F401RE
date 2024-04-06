#include <stdio.h>

struct distance {
    int feet;
    int inch;
};

void addDistance(struct distance d1, struct distance d2) {
    int total_feet = d1.feet + d2.feet;
    int total_inch = d1.inch + d2.inch;

    if (total_inch >= 12) {
        total_feet += total_inch / 12;
        total_inch %= 12;
    }

    printf("Tong hai khoang cach: %d feet %d inch\n", total_feet, total_inch);
}

int main() {
    struct distance d1, d2;
    printf("Nhap khoang cach thu nhat (feet inch): ");
    scanf("%d %d", &d1.feet, &d1.inch);
    printf("Nhap khoang cach thu hai (feet inch): ");
    scanf("%d %d", &d2.feet, &d2.inch);

    addDistance(d1, d2);

    return 0;
}

