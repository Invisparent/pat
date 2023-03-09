#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int res = 0, fact = 1;
    for (int t = 1; t <= n; ++t) {
        fact *= t;
        res += fact;
    }
    printf("%d", res);

    return 0;
}
