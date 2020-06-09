#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;cin>>t;
	while(t--){
		ll ans=0,tmp=0,bi=1;
		ll n;cin>>n;tmp=n;
		while(n)
		{
			ans+=tmp/bi;
			bi<<=1;
			n>>=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}