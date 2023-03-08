//#include <iostream>
//#include <vector>
//
//#define IVS_X 46345
//
//std::vector<int> p{2};
//std::vector<int> ans;
//
//namespace ivs {
//    void primeInit(int n) {
//        for (const auto &x: p) {
//            if (x * x > n) {
//                p.push_back(n);
//                break;
//            }
//            if (!(n % x))
//                break;
//        }
//    }
//
//    bool calc(int &n) {
//        for (const auto &x: p) {
//            if (x * x > n)
//                return false;
//            else if (!(n % x)) {
//                n = n / x;
//                ans.push_back(x);
//                return true;
//            }
//        }
//    }
//}
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    for (int t = 3; t < IVS_X; ++t)
//        ivs::primeInit(t);
//
//    int n;
//    std::cin >> n;
//    while (ivs::calc(n));
//
//    std::cout << ans.size() << std::endl;
//    for (int t = 0; t < ans.size(); ++t) {
//        std::cout << ans[t];
//        if (t != ans.size() - 1)
//            std::cout << '*';
//    }
//
//    return 0;
//}

//#include <iostream>
//
//namespace ivs {
//    int seqMultiply(int l, int r) {
//        int retVal = 1;
//        while (l <= r) {
//            retVal *= l;
//            ++l;
//        }
//        return retVal;
//    }
//}
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    int n;
//    std::cin >> n;
//    int l = 2, r = 2, ml, mr;
//
//    while (l <= r) {
//        if (ivs::seqMultiply(l, r) < n)
//            ++r;
//        else if (ivs::seqMultiply(l, r) > n)
//            ++l;
//        else {
//            if (r - l > mr - ml) {
//                ml = l;
//                mr = r;
//            }
//            ++l;
//            ++r;
//        }
//    }
//
//    std::cout << mr - ml + 1 << std::endl;
//    for (int t = ml; t <= mr; ++t) {
//        std::cout << t;
//        if (t != mr)
//            std::cout << '*';
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//#define IVS_X 46345
//
//int main(){
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    long long n;
//    std::cin>>n;
//    std::vector<long long> factor;
//
//    long long t=1;
//    while (t*t<=n){
//
//    }
//}
