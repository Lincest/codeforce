/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int x[55][55];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	bool flag = 1;
    	char s;
    	cin.get();
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			s = cin.get();
    			//cout.put(s);
    			x[i][j] = s=='0'?0:1;
    		}  	
    		s=cin.get();
    		//cout.put(s);
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			if(i == n-1 || j == n-1)
    				continue;
    			else if(x[i][j] == 1)
    			{
    				if((x[i][j+1] || x[i+1][j]) == 0)
    					flag = 0;
    			}
    		}
    	}
    	if(flag)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    }
    return 0;
}