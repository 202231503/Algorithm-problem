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
    
    int cnt = 0;
    map<char, int> mp;
    for (auto &l : s) {
        mp[l]++;
    }
    for (auto &l : mp) {
        if (l.second % 2 == 1) {
            cnt += 1;
        }
    }
    if (cnt % 2 == 0 && cnt != 0) {
        cout << "Second\n";
    } else {
        cout << "First\n";
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
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}