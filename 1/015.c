#include <stdio.h>

int main() {
    int n;
    char ch;
    scanf("%d %c", &n, &ch);

    int l = n;
    n = (n + 1) / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j)
            putchar(ch);
        putchar('\n');
    }

    return 0;
}
