#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<char, std::string> data{
        {'-', "fu"},
        {'0', "ling"},
        {'1', "yi"},
        {'2', "er"},
        {'3', "san"},
        {'4', "si"},
        {'5', "wu"},
        {'6', "liu"},
        {'7', "qi"},
        {'8', "ba"},
        {'9', "jiu"}
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;
    for (auto t = 0; t < str.size(); ++t) {
        std::cout << data[str[t]];
        if (t != str.size() - 1)
            std::cout << ' ';
    }

    return 0;
}
