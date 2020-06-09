#include<bits/stdc++.h>
using namespace std;
#define N 300005
int a[N];
int n,m,sum=0,k=1,tmp;	//k--count  tmp---experience

int main(){
//	freopen("input.txt","r",stdin);	
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		for(int i=0;i<m;++i){
			scanf("%d",&a[i]);
		}
		sort(a,a+m);
		tmp=a[0];
		for(int i=1;i<=m;++i){
			if(tmp<=k){
				sum++;k=1;
				tmp=a[i];
			}
			else{
				tmp=a[i];
				k++;
			}
		}
		cout<<sum<<endl;
		k=1;tmp=0;sum=0;
	}
//	freopen("output.txt","w",stdout);	
	return 0;
}
