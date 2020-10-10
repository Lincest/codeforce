/*
 * Author: RoccoShi
 * Time: 2020-10-10 22:50:10
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
const int maxn = 1000 + 5;
const int maxm = 200000 + 5;

int arr[maxn];

bool cmp(int a, int b) {
    return a > b ? true : false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        int t, sum = 0;
        cin >> t;
        for (int i = 0; i < t; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (!sum)
        {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;
        }
        if (sum > 0)
            sort(arr, arr + t, cmp);
        else 
            sort(arr, arr + t);
        for (int i = 0; i < t; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
