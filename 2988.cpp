#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int coins[n]={1},i;
		int u[k],v[k];
		for(i=1;i<n;i++)
			coins[i]=k*coins[i-1];
		for(i=0;i<m;i++)
			cin>>u[i]>>v[i];

		
	}
	return 0;
}