/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<string> s(15);
string x(15, '\0');
int m, n;

bool check(){
	for (int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for (int j = 0; j < m; ++j)
		{
			cnt += (x[j] == s[i][j] ? 0 : 1 );
		}
		if(cnt > 1)
			return false;
	}
	return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	bool flag = false;
    	cin >> n >> m;
    	for (int i = 0; i < n; ++i) 
    		cin >> s[i];
    	for (int i = 0; i < m; ++i)
    	{
    		x[i] = s[0][i];
    	}
    	for (int i = 0; i < m; ++i)
    	{
    		for (int j = 'a'; j <= 'z'; ++j) {
    			x[i] = j;
    			if(check()){
    				flag = true;
    				break;
    			}
    		}
    		if(flag)
    			break;		
			x[i] = s[0][i];
		}
		if(flag == 1) {
			for (int i = 0; i < m; ++i)
			{
				cout<< x[i];
			}
			cout << endl;
		}
		else
			cout << "-1" << endl;
	}
    return 0;
}