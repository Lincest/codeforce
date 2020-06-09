#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("data.txt","w",stdout);
	srand(time(NULL));
	int t = 10;
	cout<<t<<endl;
	while(t--)
	{
		int y = rand()%3;
		cout<<y<<endl;
	}
	return 0;
}