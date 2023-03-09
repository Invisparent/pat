#include <stdio.h>

int main() {
    int am, bm, tt;
    scanf("%d%d%d", &am, &bm, &tt);

    int ad = 0, bd = 0;
    int a, b, c, d;
    for (int t = 0; t < tt; ++t) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (b == d)
            continue;

        if (b == a + c)
            ++ad;
        if (d == a + c)
            ++bd;

        if (ad > am) {
            printf("A\n%d\n", bd);
            return 0;
        } else if (bd > bm) {
            printf("B\n%d\n", ad);
            return 0;
        }
    }

    return 0;
}
