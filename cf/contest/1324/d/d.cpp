/*
 * Author: RoccoShi
 * Time: 2020-06-07 19:37:51
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[200005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	ll n;
	cin >> n;
	ll b;
	ll tmp = 0, sum = 0, j = 0;
	for(ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for(ll i = 0; i < n; ++i)
	{
		cin >> b;
		a[i] -= b;
	}
	sort(a, a + n);
	for(ll i = n-1; i > 0; --i){
		if(a[i] <= 0)
			break;
		while(a[i] + a[j] <= 0){
			j++;
		}
		sum += (i - j);
		tmp = 0;
	}
	cout << sum << endl;
    return 0;
}