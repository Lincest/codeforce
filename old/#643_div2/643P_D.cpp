#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,s;
    cin >> n >> s;
    int Min = s-n+1,Max = n-1;
    if(Max >= Min-1) cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for(int i = 1;i <= n-1;i++) cout << 1 << " ";
        cout << Min << endl;
        cout << Max+1 << endl;
    }
    return 0;
}
