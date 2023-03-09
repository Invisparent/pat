#include <stdio.h>

void xprint(int n) {
    if (n < 10)
        putchar('0');
    printf("%d", n);
}

int main() {
    int hh, mm;
    scanf("%d:%d", &hh, &mm);

    if (hh < 12 || (hh == 12 && mm == 0)) {
        printf("Only ");
        xprint(hh);
        putchar(':');
        xprint(mm);
        printf(".  Too early to Dang.");
        return 0;
    }

    hh -= 12;
    for (int t = 0; t < hh + (mm != 0); ++t)
        printf("Dang");

    return 0;
}
