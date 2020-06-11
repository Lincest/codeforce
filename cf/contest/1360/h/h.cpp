/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a[105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	for (int i = 0; i < n; ++i)
    	{
    		string s;
    		cin >> s;
    		ll tmp = 0;
    		for (int j = 0; j < m; ++j)
    		{
    			tmp = tmp*2 + s[j] - '0'; // 二进制 --> 十进制
       		}
       		a[i] = tmp;
    	}
    	sort(a, a + n);
    	ll pos = ((1ll<<m)-1-n) / 2;
    	for (int i = 0; i < n; ++i)
    	{
    		if(a[i] <= pos)
    			pos++;
    	}
    	string ans(m,'0');
    	for(int i = m-1; i >= 0; --i) { // 十进制 --> 二进制
    		ans[i] = (pos & 1) + '0';
    		pos >>= 1;
    	}
    	cout << ans << endl;
    }
    return 0;
}
