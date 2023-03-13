#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int ra, ca;
    std::cin >> ra >> ca;
    std::vector A(ra, std::vector(ca, 0));
    for (int i = 0; i < ra; ++i)
        for (int j = 0; j < ca; ++j)
            std::cin >> A[i][j];

    int rb, cb;
    std::cin >> rb >> cb;
    if (ca != rb) {
        std::cout << "Error: " << ca << " != " << rb;
        return 0;
    } else
        std::cout << ra << ' ' << cb << '\n';

    std::vector B(rb, std::vector(cb, 0));
    for (int i = 0; i < rb; ++i)
        for (int j = 0; j < cb; ++j)
            std::cin >> B[i][j];

    std::vector C(ra, std::vector(cb, 0));
    for (int i = 0; i < ra; ++i)
        for (int j = 0; j < cb; ++j)
            for (int k = 0; k < rb; ++k)
                C[i][j] += A[i][k] * B[k][j];

    for (int i = 0; i < ra; ++i) {
        for (int j = 0; j < cb; ++j) {
            std::cout << C[i][j];
            if (j != cb - 1)
                std::cout << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
