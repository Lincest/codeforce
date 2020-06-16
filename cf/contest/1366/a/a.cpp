/*
 * Author: RoccoShi
 * Time: 2020-06-12 00:32:53
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int a, b;
    	cin >> a >> b;
    	if(a >= 2*b || b >= 2*a)
    		cout << min(a, b) << endl;
       	else {
       		if(a > b)
       			swap(a,b);
    		cout << (b-a) + (2*a-b)*2/3 <<endl; // 石学舟 
    	}
    }
	return 0;
}