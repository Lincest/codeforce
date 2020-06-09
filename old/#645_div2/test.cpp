#include<bits/stdc++.h>
using namespace std;
ios::sync_with_stdio(false);
cin.tie(0);

int main(){
	long long x=1;
	int n=200000;
	FILE *fp=NULL;
	fp=fopen("input.txt","w");
	fprintf(fp,"%d\n",n);
	for(int i=0;i<400000;++i)
		fprintf(fp,"%lld ",x);
	cout<<"pber"<<endl;
	return 0;
}
