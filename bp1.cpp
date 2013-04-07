#include <iostream>

using namespace std;

int main(void)
{
	int k;
	cin>>k;
	while(k--)
	{
		int n,na,nb,i;
		cin>>n>>na>>nb;
		int a,b,restult[n],sum=0;
		int at[na],bt[nb];

		for(i=0;i<na;i++)
			cin>>at[i];
		for(i=0;i<nb;i++)
			cin>>bt[i];

		for(i=0;i<n;i++)
		{
			a = at[i%na];
			b = bt[i%nb];
			if(a == b)
				restult[i] = 0;
			else if((a == 0 && b == 2)||(a == 2 && b == 5)||(a == 5 && b == 0))
				restult[i] = 1;
			else if((b == 0 && a == 2)||(b == 2 && a == 5)||(b == 5 && a == 0))
				restult[i] = -1;
			sum += restult[i];
		}

		if(sum == 0)
			cout<<"draw"<<endl;
		else if(sum < 0)
			cout<<"B"<<endl;
		else
			cout<<"A"<<endl;
	}
	return 0;
}