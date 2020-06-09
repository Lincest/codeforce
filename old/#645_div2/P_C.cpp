#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long x,y,x1,y1,t;cin>>t;
	while(t--){
		cin>>x>>y>>x1>>y1;
		cout<<(x1-x)*(y1-y)+1<<endl;
	}
	return 0;
}








