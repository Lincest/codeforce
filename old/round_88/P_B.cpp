#include<bits/stdc++.h>
using namespace std;
int a[105][1005];
char aa;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;cin>>t;
	int n,m,x,y;
	int flag=0,mark=0,money=0;//use 1x1
	while(t--){
		cin>>n>>m>>x>>y;
		if(2*x>y)flag=1;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin>>aa;
				if(aa=='.'&&flag==0){
					a[i][j]=1;
					money+=x;
				}
				else if(aa=='.'&&flag==1){
					a[i][j]=1;
					if(a[i][j-1]==1&&mark==1){
						money=money-x+y;mark=0;
					}
					else if(mark==0){
						money+=x;mark++;
					}
				}
				else if(aa=='*'){
					a[i][j]=2;mark=0;
				}
			}
			mark=0;
		}
		cout<<money<<endl;
		money=0;flag=0;
	}
	return 0;
}
