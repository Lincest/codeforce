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
const int maxn = 5000 + 5;
const int maxm = 200000 + 5;

int a[maxn];
vector<pii> vc;

bool cmp(pii x, pii y) {
    return x.se < y.se;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];   
            if (a[i] != a[i-1] && i > 1) flag = 1;
            vc.pb(mp(i, a[i]));
        }
        if (!flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            sort(vc.begin(), vc.end(), cmp);
            for (int i = 1; i < n; ++i)
            {
                if (vc[vc.size()-1].se != vc[i-1].se)
                    cout << vc[vc.size()-1].fi << " " << vc[i-1].fi << endl;
                else 
                    cout << vc[i-1].fi << " " << vc[0].fi << endl;
            }
        }
        vc.clear();
    }
    return 0;
}