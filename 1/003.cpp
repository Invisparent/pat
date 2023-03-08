#include <iostream>
#include <string>
#include <array>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::array<int, 10> arr{};
    for (const auto &ch: str)
        ++arr[ch - '0'];

    for (int t = 0; t < 10; ++t)
        if (arr[t])
            std::cout << t << ':' << arr[t] << std::endl;

    return 0;
}
