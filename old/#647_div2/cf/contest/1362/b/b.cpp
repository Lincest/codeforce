/*
 * Author: RoccoShi
 * Time: 2020-06-07 19:16:06
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<int> S;
	int t;cin>>t;
	while(t--){
		int n,s,tmp=0,max=-1,flag=1;
		cin>>n;
		while(n--)
		{
			cin>>s;
			if(s>max) 	
				max=s;
			S.insert(s);
		}
		for(int i=1;i<=1024;++i){
			flag = 1;
			for(set<int>::iterator it = S.begin(); it!= S.end(); it++)
        	{
				tmp = i^*it;
				if(!S.count(tmp)){
					flag=0;
				}
			}
			if(flag==1){ 
				cout<<i<<endl;
				break;
			}
		}
		if(flag==0)cout<<"-1"<<endl;
		S.clear();
	}
	return 0;
}