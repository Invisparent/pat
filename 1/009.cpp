#include <iostream>
#include <string>
#include <cstdlib>
#include <iterator>

namespace ivs {
    inline long long gcd(long long a, long long b) {
        while (b ^= a ^= b ^= a %= b);
        return a;
    }

    inline long long xread(std::string::const_iterator iterA, const std::string::const_iterator iterB) {
        int sgn = 1;
        if (*iterA == '-') {
            ++iterA;
            sgn = -1;
        }
        long long retVal = 0;
        while (iterA != iterB) {
            retVal = (retVal << 3) + (retVal << 1) + *iterA - '0';
            ++iterA;
        }

        return sgn * retVal;
    }

    class frac_t {
    public:
        explicit frac_t(const std::string &str) {
            auto pos = (long long) str.find('/');
            u = xread(str.cbegin(), str.cbegin() + pos);
            d = xread(str.cbegin() + pos + 1, str.cend());
        }

        inline friend std::ostream &operator<<(std::ostream &os, const frac_t &lhr) {
            if (lhr.u == 0)
                os << 0;
            else if (std::abs(lhr.u) < std::abs(lhr.d))
                os << lhr.u << '/' << lhr.d;
            else if (!(lhr.u % lhr.d))
                os << lhr.u / lhr.d;
            else {
                os << lhr.u / lhr.d << ' ' << std::abs(lhr.u) % lhr.d << '/' << lhr.d;
            }

            return os;
        }

        void simplify() {
            long long div = gcd(u, d);
            u /= div;
            d /= div;
        }

        frac_t &operator+=(const frac_t &lhr) {
            long long dt = d * lhr.d;
            u = u * lhr.d + d * lhr.u;
            d = dt;
            simplify();
            return *this;
        }

    private:
        long long u;
        long long d;
    };
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    auto res = ivs::frac_t("0/1");
    std::istream_iterator<std::string> isIter(std::cin), eof;
    ++isIter;
    while (isIter != eof)
        res += ivs::frac_t(*isIter++);

    std::cout << res;

    return 0;
}
