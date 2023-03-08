#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string a, b;
//    std::cin >> a >> b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    std::unordered_set<char> us(b.begin(), b.end());

    std::string res;
    for (const char &ch: a)
        if (us.find(ch) == us.end())
            res.push_back(ch);

    std::cout << res;

    return 0;
}
