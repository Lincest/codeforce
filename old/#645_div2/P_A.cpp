#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;cin>>k;
	int n,m;
	while(k--){
		cin>>n>>m;
		if(n*m%2==1)
			cout<<(n*m+1)/2<<endl;
		else
			cout<<n*m/2<<endl;
	}
	return 0;
}
}
