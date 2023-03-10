#include <stdio.h>

int main() {
    int tt;
    scanf("%d\n", &tt);

    char ch;
    double h;
    for (int t = 0; t < tt; ++t) {
        scanf("%c %lf\n", &ch, &h);
        if (ch == 'M')
            printf("%.2lf\n", h / 1.09);
        else
            printf("%.2lf\n", h * 1.09);
    }

    return 0;
}
