/*
 * Author: RoccoShi
 * Time: 2020-06-07 19:37:51
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[5005];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
    	int n; cin >> n;
    	int ans = 0;
    	for(int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    	}
    	int i = 0, j = n - 1;
    	while(i != n-2 && n >= 3)
		{
			if(a[j] == a[i])
				ans++;
			if(ans >= 1)break;
			j--;
			if(j == i + 1){
				i++;
				j = n - 1;
			}
		}
    	if(ans >= 1)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    }
    return 0;
}



