#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int t, q;
        cin >> t >> q;
        ll tmp, ans = 0, dns = INF, ins = -1;
        int flag = 0;
        for (int i = 0; i < t; ++i)
        {
            cin >> tmp;
            if (tmp < ins && flag == 0) { // 查找极大值
                ++flag;
                dns = tmp;
                continue;
            } 
            else if (flag == 0) {
                ins = tmp;
            }
            if (tmp > dns && flag == 1) { // 查找极小值
                ++flag;
            } 
            else if (flag == 1) {
                dns = tmp;
            }
            if(flag == 2) {
                ans += (ins - dns);
                flag = 0;
                ins = tmp;
            }
        }
        ans += ins;
        cout << ans << endl;
    }
    return 0;
}