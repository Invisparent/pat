#include <stdio.h>

int main() {
    int tt;
    scanf("%d", &tt);

    int n;
    int odd = 0, even = 0;
    for (int t = 0; t < tt; ++t) {
        scanf("%d", &n);
        if (n % 2)
            ++odd;
        else
            ++even;
    }

    printf("%d %d", odd, even);

    return 0;
}
