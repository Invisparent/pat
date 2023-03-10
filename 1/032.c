#include <stdio.h>
#include <string.h>

// ???
// What the fuck?
//#define IVS_LIM 10005
#define IVS_LIM 32289

char str[IVS_LIM];

int main() {
    int n;
    char ch;
    scanf("%d %c\n", &n, &ch);
    gets(str);

    int len = (int) strlen(str);
    if (len < n) {
        for (int t = 0; t < n - len; ++t)
            putchar(ch);
        puts(str);
    } else
        puts(str + len - n);

    return 0;
}
