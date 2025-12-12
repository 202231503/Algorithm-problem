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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }
    int res = 0;
    vector<int> x, y;
    for (int i = 1; i <= n; ++i) {
        if (b[i] % 2 == 0) {
            if (x.size() == 0) {
                x.push_back(a[i]);
            } else if (a[i] >= x.back()) {
                x.push_back(a[i]);
            } else {
                res = 1;
                x.push_back(a[i]);
            }
        } else {
            if (y.size() == 0) {
                y.push_back(a[i]);
            } else if (a[i] >= y.back()) {
                y.push_back(a[i]);
            } else {
                res = 1;
                y.push_back(a[i]);
            }
        }
    }
    
    if (res == 0) {
        cout << "Yes\n";
    } else if (x.size() >= 1 && y.size() >= 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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