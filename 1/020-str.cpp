#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <utility>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int tt;
    std::cin >> tt;
    int k;
    std::string str;
    std::unordered_set<std::string> data;
    for (int t = 0; t < tt; ++t) {
        std::cin >> k;
        if (k == 1) {
            std::cin >> str;
            continue;
        }
        for (int x = 0; x < k; ++x) {
            std::cin >> str;
            data.emplace(std::move(str));
        }
    }

    std::cin >> tt;
    std::vector<std::string> res;
    decltype(data) o;
    for (int t = 0; t < tt; ++t) {
        std::cin >> str;
        auto iterA = data.find(str);
        auto iterB = o.find(str);
        if (iterA == data.end() && iterB == o.end()) {
            o.emplace(str);
            res.emplace_back(std::move(str));
        }
    }

    if (res.empty())
        std::cout << "No one is handsome";
    else
        for (int t = 0; t < res.size(); ++t) {
            std::cout << res[t];
            if (t != res.size() - 1)
                std::cout << ' ';
        }

    return 0;
}
