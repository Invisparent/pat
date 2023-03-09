#include <stdio.h>

int allPassed = 1;
char str[19];
const int pwr[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
const char ckd[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

void solve() {
    for (int t = 0; t < 17; ++t)
        if (str[t] == 'X') {
            allPassed = 0;
            puts(str);
            return;
        }

    int hash = 0;
    for (int t = 0; t < 17; ++t)
        hash += (str[t] - '0') * pwr[t];

    hash %= 11;
    if (str[17] != ckd[hash]) {
        allPassed = 0;
        puts(str);
    }
}

int main() {
    int tt;
    scanf("%d\n", &tt);

    while (tt--) {
        gets(str);
        solve();
    }

    if (allPassed)
        printf("All passed\n");

    return 0;
}
