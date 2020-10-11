/*
 * Author: RoccoShi
 * Time: 2020-10-11 17:05:28
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
const int maxm = 200000 + 5;


// vector<int> p;
// void Solve(int n)  
// {  
//     p.clear();  
//     for(int i=2; i*i<=n; i++)  
//     {  
//         if(n%i==0)  
//         {  
//             p.push_back(i);  
//             while(n%i==0) n/=i;  
//         }  
//     }  
//     if(n>1)  
//         p.push_back(n);  //这个不可以缺少
// }  

int nums[3] = {3, 5, 7};
int t3[3];


int chk(int x) {
    for (int i = 0; i < 3; ++i)
    {
        if (x % nums[i] == 0)
            return i;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        int t;
        cin >> t;
        if (t == 1 || t == 2 || t == 4) {
            cout << "-1" << endl;
            continue;
        } else {
            int ans = chk(t);
            if (ans != -1) {
                t3[ans] = t / nums[ans];
                cout << t3[0] << " " << t3[1] << " " << t3[2] << endl;
                memset(t3, 0, sizeof(t3));
                continue;
            } else {
                for (int i = 0; i < 3; ++i)
                {
                    t -= nums[i];
                    t3[i]++;
                    int ans = chk(t);
                    if (ans != -1) {
                        t3[ans] = t / nums[ans];
                        cout << t3[0] << " " << t3[1] << " " << t3[2] << endl;
                        memset(t3, 0, sizeof(t3));
                        break;
                    }
                    t += nums[i];
                    t3[i]--;
                }
            }
        }
    }
    return 0;
}

/*
4
30
67
4
14
*/