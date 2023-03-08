#include <stdio.h>

char ch[11][5] = {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512", "1024"};

int main() {
    int n;
    scanf("%d", &n);

    printf("2^%d = %s", n, ch[n]);

    return 0;
}
