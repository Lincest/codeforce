/*
 * Author: RoccoShi
 * Time: 2020-06-07 19:37:51
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    	int n, x, y, ans = 0;
    	cin >> n;
    	cin >> x;
    	n-=1;
    	while(n--)
    	{
    		cin >> y;
    		if(abs(y-x)%2!=0)
    			ans = 1;
    	}
    	if(ans == 1) cout << "NO" << endl;
    	else 
    		cout << "YES" << endl;
    }
    return 0;
}