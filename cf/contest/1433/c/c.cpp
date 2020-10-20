/*
 * Author: RoccoShi
 * Time: 2020-10-20 23:02:17
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const int PI = 3.1415927;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f; 
const int NINF = 0xc0c0c0c0;
const int maxn = 10000 + 5;
const int maxm = 300000 + 5;

struct node
{
    int weight,height;
}a[300010];
bool cmp(node a,node b)
{
    return a.weight<b.weight;
}
int b[maxm];

main(void)
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i].weight;
            a[i].height=i;
            b[i]=a[i].weight;
        }
        sort(a+1,a+1+n,cmp);
        if(a[1].weight==a[n].weight)
        {
            cout << -1 << endl;
        }
        else
        {
            int ans=0;
            for(int i=n;i>=1;i--)
            {
                if(a[i].weight==a[n].weight)
                {
                    int digit=a[i].height;
                    if(digit-1>=1)
                    {
                        if(b[digit-1]<a[i].weight)
                        {
                            ans=digit;
                            break;
                        }
                    }
                    if(digit+1<=n)
                    {
                        if(b[digit+1]<a[i].weight)
                        {
                            ans=digit;
                            break;
                        }
                    }
                }
            }
            if(ans!=0)
            {
                cout << ans << endl;
            }
        }
    }
}