#include <stdio.h>

char str[8];

int main() {
    gets(str);
    printf("Hello %s", str);

    return 0;
}
