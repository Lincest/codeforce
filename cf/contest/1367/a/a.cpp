/*
 * Author: RoccoShi
 * Time: 2020-06-16 22:35:02
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const int PI = 3.1415927;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f; 
const int NINF = 0xc0c0c0c0;
const int maxn = 10000 + 5;
const int maxm = 200000 + 5;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	string s;
    	string ans = "";
    	cin >> s;
    	int cnt = 0;
    	for(int i = 0;i < s.size(); ++i) {
    		if(i==0 || i==s.size()-1) ans += s[i];
    		else
    		{
    			cnt++;
    			if(cnt==2) {
    				cnt = 0;
    				ans += s[i];
    			}
    		}
    	}
    	cout << ans << endl;
    }
    
    return 0;
}