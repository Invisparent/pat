#include <stdio.h>
#include <string.h>

#define IVS_LEN 10010

char str[IVS_LEN];

int main() {
    gets(str);
    int len = (int) strlen(str);

    int arr[4] = {};
    for (int t = 0; t < len; ++t) {
        if (str[t] == 'G' || str[t] == 'g')
            ++arr[0];
        else if (str[t] == 'P' || str[t] == 'p')
            ++arr[1];
        else if (str[t] == 'L' || str[t] == 'l')
            ++arr[2];
        else if (str[t] == 'T' || str[t] == 't')
            ++arr[3];
    }

    while (arr[0] || arr[1] || arr[2] || arr[3]) {
        if (arr[0]) {
            putchar('G');
            --arr[0];
        }
        if (arr[1]) {
            putchar('P');
            --arr[1];
        }
        if (arr[2]) {
            putchar('L');
            --arr[2];
        }
        if (arr[3]) {
            putchar('T');
            --arr[3];
        }
    }

    return 0;
}
