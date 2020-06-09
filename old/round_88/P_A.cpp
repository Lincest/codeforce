#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;cin>>t;
	double n,m,k;
	while(t--){
		cin>>n>>m>>k;
		if(m>n/k){
			cout<<(n/k-(ceil((m-n/k)/(k-1))))<<endl;
		}
		else{
			cout<<m<<endl;
		}
	}
	return 0;
}
