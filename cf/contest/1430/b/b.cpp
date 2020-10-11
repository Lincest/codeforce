/*
 * Author: RoccoShi
 * Time: 2020-10-11 17:05:28
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
const int maxn = 1000 + 5;
const int maxm = 200000 + 5;


bool cmp(ll a, ll b) {
    return a > b;
}

ll bar[maxm];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while (t--) {
        ll n, k, sum = 0;
        cin >> n >> k;
        for (ll i = 0; i < n; ++i)
        {
            cin >> bar[i];            
        }
        sort(bar, bar + n, cmp);
        for (ll i = 0; i < k + 1; ++i)
        {
            sum += bar[i];
        }
        cout << sum << endl;
    }
    return 0;
}