/*
 * Author: RoccoShi
 * Time: 2020-10-11 17:05:28
*/

#include<bits/stdc++.h>
using namespace std;
int main(){ios::sync_with_stdio(false);cin.tie(0);int t;cin >> t;while (t--) {int n;cin >> n;cout << 2 << endl;int sum = n;n--;while (n > 0){cout << sum << " " << n << endl;sum = ((sum + n) % 2 == 1 ? (sum + n + 1) / 2 : (sum + n) / 2);n--;}}return 0;}