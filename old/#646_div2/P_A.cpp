#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
freopen("./#646_div2/input.txt","r",stdin);
freopen("./#646_div2/output.txt","w",stdout);
int t, n, x, k;
cin >> t;
int sum = 0;
while (t--)
{
	cin >> n >> x;
	for (int i = 0; i < n; ++i)
	{	 
		cin >> k;
		if (k % 2 == 1)
		{
			sum++;
		}
	}
	if ((x == n && sum % 2 == 0) || (sum == 0) || (x % 2 == 0 && sum == n))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
	sum = 0;
fclose(stdin);
fclose(stdout);
return 0;
}


