#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("data.txt","r",stdin);
	freopen("AC.txt","w",stdout);
	int x,y;
	cin>>x;
	while(x--){
		cin>>y;
		if(y==1)
			cout<<2<<endl;
		else if (y==2)
			cout<<3<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}