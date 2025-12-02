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
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> b[i];
    }
    int ans = 0;

    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + m);

    vector<vector<int>> f(n + 2, vector<int>(m + 2, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (abs(a[i] - b[j]) <= 1) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i][j - 1], f[i - 1][j]);
            }
            ans = max(ans, f[i][j]);
        }
    }

    cout << f[n][m] <<endl;
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