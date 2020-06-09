#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll findmin(ll x){
	ll minn=99;
	while(x!=0){
		if(x%10<minn)
			minn=x%10;
		x/=10;
	}
	return minn;
}

ll findmax(ll x){
	ll maxx=-1;
	while(x!=0){
		if(x%10>maxx)
			maxx=x%10;
		x/=10;
	}
	return maxx;
}

int main(){
	int n;scanf("%d",&n);
	ll a,k;
	while(n--){
		scanf("%lld %lld",&a,&k);
		for(ll i=1;i<=k-1;++i){
			if(findmin(a)==0)break;
			a+=findmin(a)*findmax(a);
		}
		printf("%lld\n",a);
		a=0;
	}
	return 0;
}
