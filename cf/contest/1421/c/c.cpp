/*
 * Author: RoccoShi
 * Time: 2020-10-18 17:05:01
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

// the first / the last item must be the center
// just think from 'abcd' problem
/*

    abcd 
    abcd cb
    dcb abcdcb
    bc dcbabcdcb

    And we get the answer. XD
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << 3 << endl;
    cout << "R" << " " << 2 << endl;
    cout << "L" << " " << s.size() << endl;
    cout << "L" << " " << ( s.size() - 1 ) << endl;
    return 0;
}