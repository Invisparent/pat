#include <stdio.h>
#include <string.h>

char str[8];
const char *strSet[] = {"ChuiZi", "Bu", "JianDao", "ChuiZi"};

int main() {
    int k;
    scanf("%d\n", &k);
    ++k;

    int t = 0;
    int index;
    while (gets(str)) {
        if (str[0] == 'E')
            break;

        ++t;
        index = 0;
        while (strcmp(str, strSet[index]))
            ++index;
        puts(strSet[index + ((t % k) != 0)]);
    }

    return 0;
}
