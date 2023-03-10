#include <stdio.h>

int main() {
    int c = 0;
    int i;
    while (1) {
        ++c;
        scanf("%d", &i);
        if (i == 250) {
            printf("%d", c);
            return 0;
        }
    }
}
