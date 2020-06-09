/*
 * Author: RoccoShi
 * Time: 2020-06-07 22:35:02
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
char a[55][55];
int vis[55][55];
int m, n, ans;

int dfs(int x,int y){//x代表行，y代表列
	if(vis[x][y] || a[x][y]=='#')
        return 0;
    int ans = 0;
    vis[x][y] = 1;
    if(a[x][y] == 'G')
    {
        ans++;
    }
    ans = ans + dfs(x+1,y);
    ans = ans + dfs(x-1,y);
    ans = ans + dfs(x,y+1);
    ans = ans + dfs(x,y-1);
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    	cin >> m >> n;
    	for(int i=0;i<=m+1;++i)
    	{
    		a[i][0] = '#';
    		a[i][n+1] = '#';
    	}
    	for(int j=0;j<=n+1;++j)
    	{
    		a[0][j] = '#';
    		a[m+1][j] = '#';
    	}
        int cntG=0;
    	for(int i = 1; i <= m; ++i){
    		for(int j = 1; j <= n; ++j)
    		{
    			cin>>a[i][j];
                if(a[i][j] == 'G') cntG++;
    		}	
    	}
    	for(int i = 1; i <= m; ++i){
    		for(int j = 1; j <= n; ++j)
    		{
    			if(a[i][j]=='B'){
    				a[i][j-1]!='B'?a[i][j-1]='#':1;
    				a[i][j+1]!='B'?a[i][j+1]='#':1;
    				a[i+1][j]!='B'?a[i+1][j]='#':1;
    				a[i-1][j]!='B'?a[i-1][j]='#':1;
    			}
    		}	
    	}

    	ans = dfs(m,n);

    	// for(int i = 0; i <= m+1; ++i){
    	// 	for(int j = 0; j <= n+1; ++j)
    	// 	{
    	// 		cout<<a[i][j];
    	// 	}	
    	// 	cout<<endl;
    	// }

    	if(ans == cntG)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    	memset(vis,0,sizeof(vis));
    }
    return 0;
}