#include <stdio.h>
#include <string.h>

#define IVS_LIM 11

char str[IVS_LIM], a[IVS_LIM];

int main() {
    int t = 0;
    while (1) {
        gets(str);
        if (str[0] == '.')
            break;
        ++t;
        if (t == 2)
            strcpy(a, str);
        if (t == 14) {
            printf("%s and %s are inviting you to dinner...", a, str);
            return 0;
        }
    }

    if (strlen(a) != 0)
        printf("%s is the only one for you...", a);
    else
        printf("Momo... No one is for you ...");

    return 0;
}
