/*
 * Author: RoccoShi
 * Time: 2020-06-16 22:35:02
*/

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
    int t;
    cin >> t;
    while(t--) {
    	int x;
    	cin >> x;
    	int tm;
    	int ans = 0;
    	for (int i = 0; i < x; ++i)
    	{
    		cin >> tm;
    		if(tm%2 != i%2) ans++;
    	}
    	if(ans%2 == 1) 
    		cout << -1 << endl;
    	else
    		cout << ans/2 << endl;
    }
    return 0;
}