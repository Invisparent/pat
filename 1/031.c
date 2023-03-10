#include <stdio.h>

double dblAbs(double x) {
    if (x >= 0)
        return x;
    else
        return -x;
}

void solve() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    a = (a - 100) * 1.8;
    if (dblAbs(a - b) * 10 >= a)
        if (a < b)
            printf("You are tai pang le!\n");
        else
            printf("You are tai shou le!\n");
    else
        printf("You are wan mei!\n");
}

int main() {
    int tt;
    scanf("%d", &tt);

    while (tt--)
        solve();

    return 0;
}
