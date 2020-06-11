/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n, k;
    	cin >> n >> k;
    	if ( k >= n) {
    		cout << 1 << endl;
    	}
    	else 
    	{
    		int m  = sqrt(n);
    		int ans = n;
    		for (int i = m; i >= 1; --i) // 叉子的个数
    		{
    			if(n % i == 0){
    				if(i <= k) ans = min(ans, n/i);
    				if(n/i <= k) ans = min(ans, i);	// 想了好久啊烦
    			}
    		}
    		cout << ans << endl;
    	}
    }
    return 0;
}