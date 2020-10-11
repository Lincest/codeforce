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
const int maxn = 10000 + 5;
const int maxm = 200000 + 5;

void ans0(double n) {
    cout << 2 << endl;
    cout << 1 << " " << 2 << endl;
}

void ans1(double n) { // odd
    int ans = (int)((n + 1) / 2);
    cout << ans << endl;
    int j = 1, k = (int)n;
    for (int i = 0; i < (int)floor(n/2); ++i)
    {
        cout << j++ << " " << k-- << endl;
    }
    for (int i = 0; i < (int)floor(n/2); ++i)
    {
        cout << ans << " " << ans << endl;
    }
}

void ans2(double n) {
    int tmp = (2 + (int)n) / 2;
    int ans = (int)(floor((1 + (2 + n)/2) / 2 + 0.5));
    cout << ans << endl;
    int j = 2, k = (int)n;
    for (int i = 0; i < (int)(n / 2) - 1; ++i)
    {
        cout << j++ << " " << k-- << endl;
    }
    for (int i = 0; i < (int)(n / 2) - 1; ++i)
    {
        cout << tmp << " " << tmp << endl;
    }
    cout << 1 << " " << tmp << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        double n;
        cin >> n;
        if (n == 2)
            ans0(n);
        else if ((int)n % 2 == 1) 
            ans1(n);
        else 
            ans2(n);
    }
    return 0;
}