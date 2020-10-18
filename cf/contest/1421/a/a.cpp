/*
 * Author: RoccoShi
 * Time: 2020-10-18 17:05:01
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
    ll x, y;
    for (int i = 0; i < t; ++i)
    {
        cin >> x >> y;
        int z = (x & y);
        cout << (x ^ z) + (y ^ z) << endl;
    }
    return 0;
}