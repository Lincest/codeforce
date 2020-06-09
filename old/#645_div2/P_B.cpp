#include<bits/stdc++.h>
using namespace std;
int a[200005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;cin>>k;
	int n;
	int flag=0;
	while(k--){
		cin>>n;
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		for(int i=1;i<=n;++i){
			if(a[i]<=i)flag=i;
		}
		cout<<flag+1<<endl;
		flag=0;
		
	}
	return 0;
}

