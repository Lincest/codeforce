#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	string x;
	int cnt0 = 0, cnt1 = 0;
	int ans = 9999;
	int tmp = 0;
	while (t--)
	{
		cin >> x;
		if (x.size() <= 2)
			cout << "0" << endl;
		else if (x.size() == 3)
		{
			if (x == "101" || x == "010")
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else
		{
			for (int i = 0; i < x.size(); ++i)
			{
				if (x[i] == '0')
					cnt0++;
				else
					cnt1++;
			}
			ans = min(cnt0, cnt1);
			tmp = cnt0;
			for (int i = 0; i < x.size(); ++i)
			{ //ans01
				if (x[i] == '1')
					tmp++;
				else
					tmp--;
				if (tmp < ans)
					ans = tmp;
			}
			tmp = cnt1;
			for (int i = 0; i < x.size(); ++i)
			{ //ans10
				if (x[i] == '0')
					tmp++;
				else
					tmp--;
				if (tmp < ans)
					ans = tmp;
			}
			cout << ans << endl;
			ans = 9999;
			cnt0 = 0;
			cnt1 = 0;
		}
	}
	return 0;
}