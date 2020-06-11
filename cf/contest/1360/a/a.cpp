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
    	int x, y;
    	cin >> x >> y;
    	int minn = min(x+x, y+y);
    	minn = min(minn, x+y); 	
    	int ans = max(minn, x);
    	cout << pow(max(ans, y),2) << endl;
    }
    return 0;
}