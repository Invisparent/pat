#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::vector<std::pair<int, std::string>> dataMale, dataFemale;
    int n;
    std::cin >> n;
    int i;
    int rank = 0;
    std::string str;
    for (int t = 0; t < n; ++t) {
        ++rank;
        std::cin >> i >> str;
        if (i)
            dataMale.emplace_back(rank, std::move(str));
        else
            dataFemale.emplace_back(rank, std::move(str));
    }

    auto mBeg = dataMale.cbegin(), fBeg = dataFemale.cbegin();
    auto mEnd = dataMale.crbegin(), fEnd = dataFemale.crbegin();
    for (int t = 0; t < n / 2; ++t) {
        if (mBeg->first < fBeg->first) {
            std::cout << mBeg->second << ' ' << fEnd->second << '\n';
            ++mBeg;
            ++fEnd;
        } else {
            std::cout << fBeg->second << ' ' << mEnd->second << '\n';
            ++fBeg;
            ++mEnd;
        }
    }

    return 0;
}
