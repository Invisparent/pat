#include <stdio.h>

int main() {
    int l, r;
    scanf("%d%d", &l, &r);

    int counter = -1;
    int res = 0;
    while (l <= r) {
        ++counter;
        if (counter == 5) {
            counter = 0;
            putchar('\n');
        }
        printf("%5d", l);
        res += l;
        ++l;
    }

    printf("\nSum = %d", res);

    return 0;
}
