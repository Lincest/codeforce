/*
 * Author: RoccoShi
 * Time: 2020-10-24 22:06:45
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
const int maxn = 10000 + 5;
const int maxm = 200000 + 5;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            m -= a;
        }
        if (m == 0) cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}