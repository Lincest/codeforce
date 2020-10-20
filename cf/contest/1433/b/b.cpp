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
const int maxm = 200000 + 5;

int arr[100];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
        int flag = 0, ans = 0, index = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (arr[i] == 1 && flag == 0) {
                flag = 1;
            } else if (flag == 1 && arr[i] == 0) {
                ++index;
            } else if (arr[i] == 1 && flag == 1) {
                ans += index;
                index = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}