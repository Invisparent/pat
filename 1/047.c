#include <stdio.h>

char str[4];

int main() {
    int n;
    scanf("%d\n", &n);

    int a, b;
    for (int t = 0; t < n; ++t) {
        scanf("%s %d %d\n", str, &a, &b);
        if (a < 15 || a > 20 || b < 50 || b > 70)
            puts(str);
    }

    return 0;
}
