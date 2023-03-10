#include <stdio.h>

#define IVS_LIM 1005

int data[IVS_LIM];

int main() {
    int n;
    scanf("%d", &n);

    int k, f;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        for (int j = 0; j < k; ++j) {
            scanf("%d", &f);
            ++data[f];
        }
    }

    int pos, val = -1;
    for (int t = 1000; t > 0; --t) {
        if (data[t] > val) {
            val = data[t];
            pos = t;
        }
    }

    printf("%d %d", pos, val);

    return 0;
}
