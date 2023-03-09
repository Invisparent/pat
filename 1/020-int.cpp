#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <iterator>

inline void xPrint(int n) {
    std::string str = std::to_string(n);
    std::string o = std::string(5 - str.size(), '0') + str;
    std::cout << o;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::istream_iterator<int> inIter(std::cin), eof;
    int n = *inIter++;
    std::unordered_set<int> wtf;
    for (int i = 0; i < n; ++i) {
        int ts = *inIter++;
        if (ts == 1) {
            ++inIter;
            continue;
        }
        for (int j = 0; j < ts; ++j)
            wtf.emplace(*inIter++);
    }

    ++inIter;
    bool flag = true;
    decltype(wtf) l;
    std::vector<int> sb;
    while (inIter != eof) {
        auto iterA = wtf.find(*inIter);
        auto iterB = l.find(*inIter);
        if (iterA == wtf.end() && iterB == l.end()) {
            sb.emplace_back(*inIter);
            l.emplace(*inIter);
            flag = false;
        }
        ++inIter;
    }
    if (flag)
        std::cout << "No one is handsome";
    else
        for (int t = 0; t < sb.size(); ++t) {
            xPrint(sb[t]);
            if (t != sb.size() - 1)
                std::cout << ' ';
        }

    return 0;
}
