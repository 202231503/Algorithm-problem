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
    for (int i = 1; i <= 9; ++i) {
        cin >> s;
        for (auto &l : s) {
            if (l == '1') {
                l = '2';
            }
        }
        cout << s << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#ifndef ONLINE_JUDGE
    std::ifstream in("in.txt");
    std::cin.rdbuf(in.rdbuf());
    std::ofstream out("out.txt");
    std::cout.rdbuf(out.rdbuf());
#endif
    
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}