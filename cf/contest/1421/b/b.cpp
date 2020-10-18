/*
 * Author: RoccoShi
 * Time: 2020-10-18 17:05:01
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const int PI = 3.1415927;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f; 
const int NINF = 0xc0c0c0c0;
const int maxn = 200 + 5;
const int maxm = 200000 + 5;

int g[maxn][maxn];
/*
goal:
  x 
 xy
xyF

typing tooooo much... Is there any other better ways to solve it?
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int x[4];
    int y[3];
    g[1][1] = 2;
    while (t--) {
        int n;
        cin >> n;
        g[n][n] = 2;
        string s;
        for (int i = 1; i <= n; ++i) {
            cin >> s;
            for (int j = 1; j <= n; ++j)
            {
                if (s[j-1] != 'S' && s[j-1] != 'F')
                    g[i][j] = s[j-1];
            }
        }
        x[1] = g[n][n-2], x[2] = g[n-1][n-1], x[3] = g[n-2][n];
        y[1] = g[n][n-1], y[2] = g[n-1][n];
        int cx = x[1];
        int cy = y[1];
        if (x[1] == x[2] && x[1] == x[3] && x[2] == x[3]) {
            if (y[1] == y[2]) {
                if (cx == cy) {
                    cout << 2 << endl;
                    cout << n-1 << " " << n << endl;
                    cout << n << " " << n-1 << endl;
                } else {
                    cout << 0 << endl;
                }
            } else {
                if (cx == cy) {
                    cout << 1 << endl;
                    cout << n << " " << n-1 << endl;
                } else {
                    cout << 1 << endl;
                    cout << n-1 << " " << n << endl;
                }
            }
        } else {
            if (y[1] == y[2]) {
                if (x[1] == x[2]) {
                    if (x[1] == y[1]) {
                        cout << 2 << endl;
                        cout << n << " " << n-2 << endl;
                        cout << n-1 << " " << n-1 << endl;
                    } else {
                        cout << 1 << endl;
                        cout << n-2 << " " << n << endl;
                    }
                }
                else if (x[1] == x[3]) {
                    if (x[1] == y[1]) {
                        cout << 2 << endl;
                        cout << n << " " << n-2 << endl;
                        cout << n-2 << " " << n << endl;
                    } else {
                        cout << 1 << endl;
                        cout << n-1 << " " << n-1 << endl;
                    }
                } 
                else {
                    if (x[2] == y[1]) {
                        cout << 2 << endl;
                        cout << n-1 << " " << n-1 << endl;
                        cout << n-2 << " " << n << endl;
                    } else {
                       cout << 1 << endl;
                       cout << n << " " << n-2 << endl; 
                    }
                }
            } else {
                if (x[1] == x[2]) {
                    if (cy == x[1]) {
                        cout << 2 << endl;
                        cout << n-2 << " " << n << endl;
                        cout << n << " " << n-1 << endl;
                    } else {
                        cout << 2 << endl;
                        cout << n-2 << " " << n << endl;
                        cout << n-1 << " " << n << endl;
                    }
                }
                else if (x[1] == x[3]) {
                    if (cy == x[1]) {
                        cout << 2 << endl;
                        cout << n-1 << " " << n-1 << endl;
                        cout << n << " " << n-1 << endl;
                    } else {
                    cout << 2 << endl;
                        cout << n-1 << " " << n-1 << endl;
                        cout << n-1 << " " << n << endl;
                    }
                }
                else if (x[2] == x[3]) {
                    if (cy == x[2]) {
                        cout << 2 << endl;
                        cout << n << " " << n-2 << endl;
                        cout << n << " " << n-1 << endl;
                    } else {
                        cout << 2 << endl;
                        cout << n << " " << n-2 << endl;
                        cout << n-1 << " " << n << endl;
                    }
                }
            }
        }

    }
    return 0;
} 

/*
1
4
S010
0001
1000
111F

1
3
S11
011
00F

1
4
S010
1110
0010
100F
*/