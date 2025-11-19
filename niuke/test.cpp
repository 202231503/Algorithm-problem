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

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

PII grep[1011][1011];

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            grep[i][j] = {-1, -1};
        }
    }
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
//     if (x1 == x2 && y1 == y2) {
//         if (k % 2 == 0) {
//             cout << "Yes\n";
//             for (int i = 1; i <= k; i += 2) {
//                 cout << x1 + 1 << " " << y1 + 2 << "\n" << x1 << " " << y1 << "\n";
//             }
//         } else {
//             cout << "No\n";
//         }
//         return ;
//     }
    
    queue<pair<PII, int>> q;
    q.push({{x1, y1}, 0});
    
    int res = 0;
    while (!q.empty()) {
        auto top = q.front();
        q.pop();
        int x = top.first.first;
        int y = top.first.second;
        int cnt = top.second;
        if (cnt > k) {
            cout << "No\n";
            return ;
            break;
        }
        if (x == x2 && y == y2) {
            res = cnt;
            break;
        }
        
        for (int i = 0; i < 8; ++i) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (xx > 0 && yy > 0 && xx <= n && yy <= m) {
                if (grep[xx][yy].first == -1 && grep[xx][yy].second == -1) {
                    grep[xx][yy] = {x, y};
                    q.push({{xx, yy}, cnt + 1});
                }
            }
        }
    }
//     cout << res << "\n";
    if (res <= k && (k - res) % 2 == 0) {
        cout << "Yes\n";
        vector<PII> ans;
        int x = x2, y = y2;
        while (1) {
            if (x == x1 && y == y1) {
                break;
            }
//             cout << "--\n";
            ans.push_back({x, y});
            PII w = grep[x][y];
            x = w.first, y = w.second;
        }
        for (int i = res + 1; i <= k; i += 2) {
            cout << x1 + 1 << " " << y1 + 2 << "\n" << x1 << " " << y1 << "\n";
        }
        for (int i = (int)ans.size() - 1; i >= 0; --i) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    } else {
        cout << "No\n";
    }
    
//     cout << "No\n";
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