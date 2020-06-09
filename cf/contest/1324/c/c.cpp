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
    string s;
    int t;cin >> t;
    while( t-- ){
    	int seq = 0, step = 1;
    	cin >> s;
    	for( int i = 0; i < s.size(); ++i){
    		if(s[i] == 'L')
    			seq++;
    		else if(s[i] == 'R')
    			seq = 0;
    		if(step - seq <= 0)
    			step++;
    	}
    	cout << step << endl;
    }
    return 0;
}