#include <iostream>
#include <string>
#include <algorithm>

bool isLegal(const std::string &str) {
    if (!std::all_of(str.cbegin(), str.cend(), [](const auto &ch) {
        return std::isdigit(ch);
    }))
        return false;

    int tmp = std::stoi(str);
    if (tmp < 1 || tmp > 1000)
        return false;

    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str1, str2;
    std::cin >> str1 >> str2;
    bool b1 = isLegal(str1);
    bool b2 = isLegal(str2);

    std::string fuck;
    std::cin >> fuck;
    if (!fuck.empty())
        b2 = false;

    if (b1 && b2)
        std::cout << std::stoi(str1) << " + " << std::stoi(str2) << " = " << std::stoi(str1) + std::stoi(str2);
    else if (!(b1 || b2))
        std::cout << "? + ? = ?";
    else {
        if (b1)
            std::cout << std::stoi(str1) << " + ? = ?";
        else
            std::cout << "? + " << std::stoi(str2) << " = ?";
    }

    return 0;
}
