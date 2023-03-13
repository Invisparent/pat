//#include <cstdio>
//#include <unordered_map>
//
//int main() {
//    int tt;
//    std::scanf("%d\n", &tt);
//
//    int i;
//    char ch;
//    int hh, mm;
//    std::unordered_map<int, int> data;
//    int sigT = 0, sigC = 0;
//    for (int t = 0; t < tt;) {
//        std::scanf("%d %c %d:%d\n", &i, &ch, &hh, &mm);
//        if (!i) {
//            if (!sigC)
//                std::printf("0 0\n");
//            else {
//                std::printf("%d %.0lf\n", sigC, ((double) sigT  / sigC)+.25);
//                sigT = 0;
//                sigC = 0;
//                data.clear();
//            }
//            ++t;
//            continue;
//        }
//        if (ch == 'S')
//            data.emplace(i, hh * 60 + mm);
//        else {
//            auto iter = data.find(i);
//            if (iter == data.end())
//                continue;
//            else {
//                ++sigC;
//                sigT += hh * 60 + mm - iter->second;
//                data.erase(iter);
//            }
//        }
//    }
//
//    return 0;
//}
