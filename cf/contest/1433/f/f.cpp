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
const int maxn = 100 + 5;
const int maxm = 200000 + 5;

int a[maxn][maxn];

bool cmp (int a, int b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    int sum = 0, ans = 0;
    cin >> n >> m >> k;
    int sz = m / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
        sort(a[i], a[i] + m, cmp);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < sz; ++j) {

            sum += a[i][j];
            if (sum % k == 0 && ans < sum)
                ans = sum; 
        }
    }
    if (sum % k != 0) {
        ans = (sum / k) * k;
    }
    cout << ans << endl;
    return 0;
}