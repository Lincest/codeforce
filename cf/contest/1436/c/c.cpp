/*
 * Author: RoccoShi
 * Time: 2020-10-24 22:06:45
*/
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wsign-compare"
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


ll A(ll x, ll y) { // 全排列 xAy
    ll ans = 1;
    for (ll i = 0; i < x; ++i) {
        ans = ((ans % MOD) * (y - i)); // 性质 : (a * b) % p = (a % p * b % p) % p
                                       //        (a * b * c) % p = ((a * b) % p * c % p) % p = ((a % p * b % p) % p * c % p ) % p
    }
    return ans % MOD;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, pos;
    cin >> n >> x >> pos;
    int l = 0, r = n;
    int small = 0, big = 0;
    while (l < r) {
        int mid = (l + r) / 2;
        if (pos < mid) {
            big++;
            r = mid;
        }
        else {
            if (mid != pos) // 注意当mid = pos的时候small不必++
                small++;
            l = mid + 1;
        }
    }
    ll other = n - big - small - 1;
    cout << (A(big, n-x) * A(small, x-1) % MOD * A(other, other)) % MOD << endl;
    return 0;
}