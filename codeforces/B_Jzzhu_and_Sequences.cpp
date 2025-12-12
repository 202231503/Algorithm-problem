#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 0x3f3f3f3f3f3f3f3f
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int N = 1e6 + 10;
const int mod = 1000000007;
int h[N];
// int a[N], b[N];

// int qpow(int a, int b) {
//     int res = 1;
//     while (b) {
//         if (b & 1) {
//             res = res * a % mod;
//         }
//         a = a * a % mod;
//         b >>= 1;
//     }
//     return res;
// }

// int invv(int a) {
//     return qpow(a, mod - 2);
// }

void solve() {
    int x, y, n;
    cin >> x >> y >> n;
    // cout << x << " " << y << " " << n << " --\n";
    int a[] = {0, x, y, y - x, 0 - x, 0 - y, x - y, x, y};

    int t = n % 6;
    if (t == 0) {
        t = 6;
    }
    cout << (a[t] % mod + mod) % mod << endl;

    // cout << n % 6  << "--\n";
    // for (int i = 1; i <= 6; ++i) {
    //     cout << invv(a[i] % mod + mod) << " - ";
    // }
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