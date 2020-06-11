/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn = 55;
int mp[maxn][maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
 	int n, a, m, b;
    while(t--) {
	    cin >> n >> m >> a >> b;
	    if(n*a != m*b)
	    {
	    	cout << "NO" << endl;
	    }
	    else 
	    {
	    	cout << "YES" << endl;
		    int pos = 0;
		    for (int i = 0; i < n; ++i)
		    {
		    	for (int j = 0; j < a; ++j)
		    	{
					 mp[i][pos++] = 1;
					 pos %= m;
		    	}
		    }
		    for (int i = 0; i < n; ++i)
		    {
		    	for (int j = 0; j < m; ++j) {
		    		cout << mp[i][j];
		    		mp[i][j] = 0;
		    	}
		    	cout << endl;
		    }
		}
	}
	return 0;
}