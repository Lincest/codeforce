/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int team[55];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int minn = 9999;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> team[i];
    	}
    	sort(team, team + n);
    	for (int i = 1; i < n; ++i)
    	{
    		if (minn > team[i]-team[i-1]) {
    			minn = team[i]-team[i-1];
    		}
    	}
    	cout << minn <<endl;
    }
    return 0;
}