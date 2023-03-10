#include <stdio.h>

#define IVS_LIM 11

char str[IVS_LIM];

int main() {
    gets(str);

    str[2] = '\0';
    str[5] = '\0';

    printf("%s-%s-%s", str + 6, str, str + 3);

    return 0;
}
