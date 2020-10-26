/*
 * Author: RoccoShi
 * Time: 2020-10-20 23:02:17
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
const int maxn = 70 + 5;
const int maxm = 200000 + 5;

// tutorial  --> 一个标准的背包问题
// dp[x][y][cnt][rem] --> 取第x行第y列选cnt个数, 模k所得余数为rem的最大方案数

// 状态转移方程 : 
// dp[x][y+1][cnt][rem] = max(dp[x][y+1][cnt][rem], dp[x][y][cnt][rem]) 
// -> 如果我们不选择现在这个元素
// dp[x][y+1][cnt+1][(rem+a(x,y)) % k] = 
// max(dp[x][y+1][cnt+1][(rem+a(x,y)) % k], dp[x][y][cnt][rem] + a(x,y))
// -> 如果我们选择现在这个元素
// init : dp[0][0][0][0] = 0
// ans = max(0, dp[n][0][0][0])

int a[maxn][maxn];
int dp[maxn][maxn][maxn][maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    // --------------init--------------------
    for (int i = 0; i < maxn; ++i) {
        for (int j = 0; j < maxn; ++j) {
            for (int cnt = 0; cnt < maxn; ++cnt) {
                for (int rem = 0; rem < maxn; ++rem) {
                    dp[i][j][cnt][rem] = NINF;
                }
            }
        }
    }
    dp[0][0][0][0] = 0;
    //-----------------dp---------------------
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int cnt = 0; cnt < m / 2 + 1; ++cnt) {
                for (int rem = 0; rem < k; ++rem) {
                    // next i, next j
                    int ni = (j == m - 1 ? i + 1 : i);
                    int nj = (j == m - 1 ? 0 : j + 1);
                    // 不选a[i][j], 考虑a[nexti][nextj]
                    if (i != ni) { // 如果存在换行
                        dp[ni][nj][0][rem] = max(dp[ni][nj][0][rem], dp[i][j][cnt][rem]);
                    } else { // 不存在换行
                        dp[ni][nj][cnt][rem] = max(dp[ni][nj][cnt][rem], dp[i][j][cnt][rem]);
                    }
                    // 选a[i][j], 考虑a[nexti][nextj]
                    if (cnt + 1 <= m / 2) { // 这里需要判断选完a[i][j], cnt是否超过了m/2
                        if (i != ni) {
                            dp[ni][nj][0][(rem + a[i][j]) % k] = max(dp[ni][nj][0][(rem + a[i][j]) % k], dp[i][j][cnt][rem] + a[i][j]);
                        } else { 
                            dp[ni][nj][cnt + 1][(rem + a[i][j]) % k] = max(dp[ni][nj][cnt + 1][(rem + a[i][j]) % k], dp[i][j][cnt][rem] + a[i][j]);
                        }
                    }
                }
            }
        }
    }
    cout << dp[n][0][0][0] << endl;
    return 0;
}
