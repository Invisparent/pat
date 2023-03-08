#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::unordered_map<std::string, std::pair<std::string, std::string>> data;
    std::string a, b, c;
    for (int t = 0; t < n; ++t) {
        std::cin >> a >> b >> c;
        data.emplace(std::move(b), std::make_pair(std::move(a), std::move(c)));
    }

    int tt;
    std::cin >> tt;
    std::string q;
    for (int t = 0; t < tt; ++t) {
        std::cin >> q;
        std::cout << data[q].first << ' ' << data[q].second << std::endl;
    }

    return 0;
}
