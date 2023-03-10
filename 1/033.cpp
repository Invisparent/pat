#include <iostream>
#include <string>
#include <algorithm>

std::string a;
int b;

void strPlus(std::string &str) {
    ++str[3];
    for (int t = 3; t > 0; --t) {
        if (str[t] > '9') {
            str[t] -= 10;
            ++str[t - 1];
        }
    }
}

int strDiff(std::string str) {
    std::sort(str.begin(), str.end());
    auto iter = std::unique(str.begin(), str.end());
    return (int) (iter - str.begin());
}

void solve() {
    while (a.size() < 4)
        a.insert(a.begin(), '0');
    std::string target = a;
    while (strDiff(target) != b)
        strPlus(target);

    std::cout << std::stoi(target) - std::stoi(a) << ' ' << target << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    while (std::cin >> a >> b)
        solve();

    return 0;
}
