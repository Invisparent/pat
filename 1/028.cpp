//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//std::vector<int> data{2};
//
//void isp(int n) {
//    for (const auto &x: data)
//        if (x * x > n) {
//            data.push_back(n);
//            break;
//        } else if (!(n % x))
//            break;
//}
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    for (int t = 3; t <= 2147483647; ++t)
//        isp(t);
//
//    int n, i;
//    std::cin >> n;
//    for (int t = 0; t < n; ++t) {
//        std::cin >> i;
//        auto iter = std::lower_bound(data.begin(), data.end(), i);
//        if (iter != data.end() && *iter == i)
//            std::cout << "Yes\n";
//        else
//            std::cout << "No\n";
//    }
//
//    return 0;
//}

#include <iostream>

bool isp(int n) {
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    int t = 2;
    while (t <= n / t) {
        if (!(n % t))
            return false;
        ++t;
    }

    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int tt, i;
    std::cin >> tt;
    for (int t = 0; t < tt; ++t) {
        std::cin >> i;
        if (isp(i))
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }

    return 0;
}
