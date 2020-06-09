#include<bits/stdc++.h>
using namespace std;
long long a[200005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n,x,sum=0,max=-1,flag=0;
	cin>>n>>x;
	long long d;
	for(long long i=0;i<n;++i){
		cin>>a[i];
		if(sum<x)
			sum+=a[i];
		if(sum>=x){
			if(sum>max){
				max=sum;
				flag=i;
				sum=0;
			}	
		}
	}
	long long tmp=x;
	for(long long i=0;i<n;++i){
		if(sum<x)
			sum+=a[i];
		if(sum>=x){
			if(sum>max){
				max=sum;
				flag=i;
				sum=0;
			}	
		}
		tmp-=a[i];
		if(tmp<=0)break;
	}
	tmp=x;sum=0;
	for(int i=0;i<x;++i){
		for(int j=1;j<=a[flag];++j){
			sum+=a[flag-j+1];
			tmp-=1;
			if(tmp<=0)break;
		}
	}
	cout<<sum<<endl;
	return 0;
}
