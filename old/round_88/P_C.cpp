#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x;cin>>x;
	double h,c,t,k1,k2,k;
	while(x--){
		cin>>h>>c>>t;
		double ans1=h,ans2=(h+c)/2;
		if(ans2>=t){
			cout<<"2"<<endl;
			continue;
		}
		k=(h-t)/(2*t-h-c);
		k1=floor(k);k2=ceil(k);
		if(abs(t-((k1+1)*h+k1*c)/(2*k1+1))<=abs(t-((k2+1)*h+k2*c)/(2*k2+1)))cout<<2*k1+1<<endl;
		else cout<<2*k2+1<<endl;
		}
	return 0;
}
