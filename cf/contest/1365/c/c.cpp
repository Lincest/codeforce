/*
 * Author: RoccoShi
 * Time: 2020-06-07 22:35:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 4e5 + 5;
int a[N], b[N], vis[N];
int ans = 0;
map<int,int> mp;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		vis[a[i]] = i;
	}
	for(int i = 0; i < n; ++i){
		cin >> b[i];
		ans = vis[b[i]] - i;
		if(ans >= 0)
			mp[ans]++;
		else
			mp[n+ans]++;
	}
	map<int,int>::iterator it;
	ans = -1;
	for(it = mp.begin(); it != mp.end(); ++it)
	{
		ans = max(ans, it->second);
	}
	cout << ans << endl;
	return 0;
}