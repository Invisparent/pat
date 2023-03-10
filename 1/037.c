#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    if (b == 0) {
        printf("%.0lf/%.0lf=Error", a, b);
        return 0;
    }
    if (b > 0)
        printf("%.0lf/%.0lf=%.2lf", a, b, a / b);
    else
        printf("%.0lf/(%.0lf)=%.2lf", a, b, a / b);

    return 0;
}
