/*
 * Author: RoccoShi
 * Time: 2020-06-07 22:35:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int vix[50];
int viy[50];
int cntx=0, cnty=0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
    	int m, n;
    	cin >> n >> m;
    	int x;
    	for(int i = 0; i < n; ++ i)
    		for(int j = 0; j < m; ++ j){
    			cin>>x;
    			if(x==1){
    				vix[i] = 1;
    				viy[j] = 1;
    			}
    		}
    	for(int i = 0; i < n; ++ i)
    	{
    		if(vix[i]==0) cntx++;
    	}	
    	for(int i = 0; i < m; ++ i){
    		if(viy[i]==0) cnty++;
    	}
    	int ans = min(cntx,cnty) % 2;
    	if(ans==1)cout << "Ashish" <<endl;
    	else cout << "Vivek" <<endl;
    	memset(vix,0,sizeof(vix));
    	memset(viy,0,sizeof(viy));
   		cntx=0;cnty=0;
    }
    
    return 0;
}