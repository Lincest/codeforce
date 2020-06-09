/*
 * Author: RoccoShi
 * Time: 2020-06-07 22:35:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    	int n,a,b,tmp;
    	cin>>n;
    	int flag = 0;
    	for(int i=0;i<n;++i){
    		cin >> a;
    		if(i!=0)
    			if(a<tmp)
    				flag = 1;
    		tmp = a;
    	}
    	for(int i=0;i<n;++i){
    		cin >> b;
    		if(i!=0)
    			if(b!=tmp)
    				flag = 0;
    		tmp = b;
    	}
    	if(flag == 0)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
    return 0;

}