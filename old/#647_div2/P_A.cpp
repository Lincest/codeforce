#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll log2(ll a) {
	ll count = 0;
	while (1) {
		if (a >>= 1)
			count++;
		else
			break;
	}
	return count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;cin>>t;
	ll x,y;
	ll ans,tmp;
	while(t--){
		cin>>x>>y;
		if(x<y)swap(x,y);
		else{
			if(x==y)cout<<"0"<<endl;
			else{
				if(x%y!=0||(x%y==0&&(x/y&(x/y-1))!=0))cout<<"-1"<<endl;
				else{
					tmp = log2(x/y);
					ans = tmp/3 + (tmp%3)/2 + (tmp%3%2);
					cout<<ans<<endl;
				}
			}
		}
	}
	return 0;
}