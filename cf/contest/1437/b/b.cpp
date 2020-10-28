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
const int maxn = 10000 + 5;
const int maxm = 200000 + 5;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; cin >> s;
        int flag = s[0];
        int tt = s[0];
        int res1 = 0, res2 = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (s[i] != flag) {
                flag = s[i];
                continue;
            } else {
                if (flag == tt)
                    res1++;
                else 
                    res2++;
                flag = s[i];
            }
        }
        cout << max(res1, res2) << endl;
    }
    return 0;
}


