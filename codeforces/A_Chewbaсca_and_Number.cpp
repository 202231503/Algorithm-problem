#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 0x3f3f3f3f3f3f3f3f
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int N = 1e6 + 10;
const int mod = 998244353;
int h[N];
int a[N], b[N];

void solve() {
    string s;
    cin >> s;
    int idx = 0;
    for (auto &l : s) {
        if (idx == 0) {
            if (l >= '5' && l <= '8') {
                int t = l - '0';
                l = (9 - t) + '0';
            }
        } else {
            if (l <= '4') {

            } else {
                int t = l - '0';
                l = (9 - t) + '0';
            }
        }
        idx++;

        
    }
    cout << s << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
// #ifndef ONLINE_JUDGE
//     std::ifstream in("in.txt");
//     std::cin.rdbuf(in.rdbuf());
//     std::ofstream out("out.txt");
//     std::cout.rdbuf(out.rdbuf());
// #endif
    
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}