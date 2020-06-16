/*
 * Author: RoccoShi
 * Time: 2020-06-16 22:35:02
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
    	int x, k;
    	cin >> x >> k;
    	string ss;
    	int cnt = 0, ans = 0;
    	cin >> ss;
    	string s1 = "";
    	for (int i = 0; i < k; ++i)
    	{
    		s1+='0';
    	}
    	ss = s1+ss+s1;
		{
	    	for (int i = 0; i < ss.size(); ++i)
	    	{
	    		char s = ss[i];
	    		if (s == '0'){
	    			cnt++;
	    		}
	    		else{
	    			if (cnt >= 2*k + 1) {
	    			ans += (cnt-(2*k+1))/(k+1)+1;
	    			}
	    			cnt = 0;
	    		} 
	    			

	    	}
	    if(cnt >= 2*k + 1)
			{
				ans+=(cnt-(2*k+1))/(k+1)+1;
			}
	    cout << ans << endl;
	    }
    }
    return 0;
}