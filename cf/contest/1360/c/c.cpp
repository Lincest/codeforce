/*
 * Author: RoccoShi
 * Time: 2020-06-10 20:05:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[55];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int cntodd = 0, cnteven = 0, cntpair = 0;
    	for (int i = 0; i < n; ++i) {
    		cin >> a[i];
    		if (a[i] % 2 == 1)
    			cntodd++;
    		else 
    			cnteven++;
    	}
    	sort(a, a+n);
    	for (int i = 1; i < n; ++i)
    	{
    		if(a[i]-a[i-1]==1){
    			cntpair++;
    			i++;
    		}
    	}
    	if(cnteven % 2 == 1 && cntodd % 2 ==1 ) {
    		if(!cntpair)
    			cout << "NO" <<endl;
    		else
    			cout << "YES" << endl;
    	}
    	else
    		cout<< "YES" <<endl;
    }
    return 0;
}