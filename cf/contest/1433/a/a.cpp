/*
 * Author: RoccoShi
 * Time: 2020-10-20 23:02:17
*/

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
const int maxn = 10000 + 5;
const int maxm = 200000 + 5;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int s = x % 10;
        int ans = 0;
        while (x >= 1) {
            x /= 10;
            ++ans;
        }
        ans = (1 + ans) * ans / 2;
        ans += 10 * (s - 1);
        cout << ans << endl;
    }
    return 0;
}