/*
 * Author: RoccoShi
 * Time: 2020-06-07 19:16:06
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
	ll sum=0,cnt=0,tmp=0;
	while(t--){
		ll n;cin>>n;
		while(1)
		{
			tmp = n&1;
			n = n>>1;
			if(tmp==1)
				sum+=pow(2,cnt+1)-1;
			if(n==0)break;
			cnt++;
		}
		cout<<sum<<endl;
		cnt=0;sum=0;
	}
    return 0;
}