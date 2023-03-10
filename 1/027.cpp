#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;
    std::vector<char> vc;
    for (const auto &ch: str) {
        auto iter = std::find(vc.begin(), vc.end(), ch);
        if (iter == vc.end())
            vc.push_back(ch);
    }
    std::sort(vc.begin(), vc.end(), std::greater<>());

    std::cout << "int[] arr = new int[]{";
    for (auto t = 0; t < vc.size(); ++t) {
        std::cout << vc[t];
        if (t != vc.size() - 1)
            std::cout << ',';
    }
    std::cout << "};\n";

    std::cout << "int[] index = new int[]{";
    for (auto t = 0; t < str.size(); ++t) {
        auto iter = find(vc.begin(), vc.end(), str[t]);
        std::cout << iter - vc.begin();
        if (t != str.size() - 1)
            std::cout << ',';
    }
    std::cout << "};\n";

    return 0;
}
