#include <stdio.h>
#include <string.h>

#define IVS_LEN 1005
#define IVS_LIM 105

char str[IVS_LEN];
char data[IVS_LIM][IVS_LEN];

int main() {
    int n;
    scanf("%d\n", &n);
    gets(str);

    int len = (int) strlen(str);
    int j = (len + n - 1) / n - 1;
    int bj = j;
    int i = 0;
    for (int t = 0; t < len; ++t) {
        data[i][j] = str[t];
        ++i;
        if (i == n) {
            i = 0;
            --j;
        }
    }

    for (int t = 0; t < n; ++t)
        if (data[0][t] == 0)
            data[0][t] = ' ';

    for (int x = 0; x < n; ++x) {
        for (int y = 0; y <= bj; ++y)
            putchar(data[x][y]);
        putchar('\n');
    }

    return 0;
}
