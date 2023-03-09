#include <stdio.h>
#include <string.h>

char str[55];

int main() {
    gets(str);
    int len = (int) strlen(str);
    int sz2 = 0;
    for (int t = 0; t < len; ++t)
        if (str[t] == '2')
            ++sz2;

    double pwr = 1.;
    if ((str[len - 1] - '0') % 2 == 0)
        pwr = 2;
    if (str[0] == '-') {
        --len;
        pwr *= 1.5;
    }

    printf("%.2lf%%", 100 * pwr * ((double) sz2) / len);

    return 0;
}
