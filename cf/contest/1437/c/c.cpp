/*
 * Author: RoccoShi
 * Time: 2020-10-27 22:35:02
*/
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wsign-compare"
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const int PI = 3.1415927;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f; 
const int NINF = 0xc0c0c0c0;
const int maxn = 210;
const int maxm = 1010;

int dp[maxm][maxm];
int t[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> t[i];
        }
        sort(t + 1, t + 1 + n);
        for (int i = 0; i <= n * 2; ++i) {
            for (int j = 0; j <= n; ++j) {
                dp[i][j] = INF;
            }
        }
        dp[0][0] = 0;
        int sz = n + n / 2;
        for (int i = 0; i <= sz; ++i) {
            for (int j = 0; j <= n; ++j) {  // 考虑在i + 1个时间要不要多拿一个菜
                if (dp[i][j] < INF) {
                    dp[i+1][j] = min(dp[i][j], dp[i+1][j]); // 拿
                    if (j + 1 <= n) {
                        dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + abs(t[j+1] - (i+1))); // 不拿
                    }
                }
            }
        }
        int ans = INF;
        for (int i = 1; i <= sz; ++i)
        {
            ans = min(ans, dp[i][n]);
        }
        cout << ans << endl;
    }
    return 0;
}

