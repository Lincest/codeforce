#include<bits/stdc++.h>

using namespace std;
inline int read()
{
    char c=getchar();int x=0,f=1;
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
    return x*f;
}
struct node
{
    int l,r;
}p[100010];
int dis[100010];
int book[100010];
int main()
{
    int t=read();
    while(t--)
    {
        memset(book,0,sizeof(0)); 
        int n=read();
        int k=read();
        int cnt=0;
        int ans=0;
        string a;
        cin>>a;
        int fu=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='L')
            fu++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]=='W')
            {
                p[++cnt].l=i;
                p[cnt].r=i;
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]!='W')
                    break;
                    p[cnt].r=j;
                    i=j;
                }
            }
        }
        for(int i=2;i<=cnt;i++)
        {
            dis[i]=p[i].l-p[i-1].r-1;
        }
        if(cnt>=1)
        sort(dis+2,dis+1+cnt);
        int kk=k;
        for(int i=2;i<=cnt;i++)
        {
            if(dis[i]<=k&&k!=0)
            {
                book[i]=1; 
                k-=dis[i];
                ans+=(p[i].r-p[i].l+1)*2;
                if(book[i-1]==0)
                {
                    ans+=1+((p[i-1].r-p[i-1].l+1)-1)*2;
                    if(i!=2)
                    ans-=1+(p[i-1].r-p[i-1].l)*2;
                }
                else
                {
                    ans+=((p[i-1].r-p[i-1].l+1))*2;
                    if(i!=2)
                    ans-=(p[i-1].r-p[i-1].l+1)*2;
                }
                ans+=dis[i]*2;
            }
            else
            {
                if(i==2)
                {
                    ans+=1+(p[i-1].r-p[i-1].l)*2;
                }
                ans+=1+(p[i].r-p[i].l)*2;
            }
        }
        if(cnt==1)
        {
            ans+=1+(p[1].r-p[1].l)*2;
        }
        if(k>0)
        {
            if(kk-k!=fu)
            {
                int bian=min(k,fu-(kk-k));
                if(fu!=n)
                ans+=bian*2;
                else 
                ans+=1+(bian-1)*2;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}