#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::array<int, 3> arr;
    std::cin >> arr[0] >> arr[1] >> arr[2];

//    std::ranges::sort(arr);
    std::sort(arr.begin(), arr.end());

    std::cout << arr[0] << "->" << arr[1] << "->" << arr[2];

    return 0;
}
