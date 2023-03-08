#include <stdio.h>

int ivsCalc(int layer) {
    int retVal = -1;
    for (int t = 0; t < layer; ++t)
        retVal += 2 * (t * 2 + 1);
    return retVal;
}

void ivsPrint(int layer, char ch) {
    int width = layer * 2 - 1;

    for (int i = width; i > 0; i -= 2) {
        int j = (width - i) / 2;
        for (int t = 0; t < j; ++t)
            putchar(' ');
        for (int t = 0; t < i; ++t)
            putchar(ch);
//        for (int t = 0; t < j; ++t)
//            putchar(' ');
        putchar('\n');
    }

    for (int i = 3; i <= width; i += 2) {
        int j = (width - i) / 2;
        for (int t = 0; t < j; ++t)
            putchar(' ');
        for (int t = 0; t < i; ++t)
            putchar(ch);
//        for (int t = 0; t < j; ++t)
//            putchar(' ');
        putchar('\n');
    }
}

int main() {
    int n;
    char ch;
    scanf("%d %c", &n, &ch);

    int res;
    int layer = 1;
    while (ivsCalc(layer + 1) <= n)
        ++layer;
    res = n - ivsCalc(layer);

    ivsPrint(layer, ch);
    printf("%d", res);

    return 0;
}
