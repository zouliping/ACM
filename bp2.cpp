#include <iostream>

using namespace std;

int main(void)
{
	int n;
	while(cin>>n)
	{
		int x[n],y[n],i,j,k;
		int dp[100][100] = {0};
		int steps=0;
		for(i=1;i<=n;i++)
			x[i] = i;
		for(j=1;j<=n;j++)
			y[j] = n - j;

		for(i=1;i<=n;i++)
		{
			if(y[i] == 0)
				steps += 1;
			else if(x[i] == 1 || y[i] == 1)
				steps += x[i] + y[i];
			else
			{
				for(dp[1][0]=k=1;k<=x[i];++k)
				{
					for(j=1;j<=y[i];++j)
						dp[k][j] = dp[k-1][j] + dp[k][j-1];
				}
				cout<<"x[i]="<<x[i]<<"y[i]="<<y[i]<<"dp="<<dp[x[i]][y[i]]<<endl;
				steps += dp[x[i]][y[i]];
			}
		}
		cout<<1 + steps * 2<<endl;
	}
	return 0;
}