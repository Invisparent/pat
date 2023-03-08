#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n = 5 * (n - 32) / 9;
    printf("Celsius = %d", n);
    return 0;
}
