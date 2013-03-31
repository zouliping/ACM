#include <iostream>

using namespace std;

int main()
{
	int num,count=1;
	int money[4] = {25,10,5,1};
	cin>>num;
	while(num--)
	{
		int cents,i;
		int one[4];
		cin>>cents;

		for(i=0;i<4;i++)
		{
			one[i] = cents/money[i];
			cents = cents - one[i]*money[i];
		}

		cout<<count<<" "<<one[0]<<" QUARTER(S), "<<one[1]<<" DIME(S), "<<one[2]<<" NICKEL(S), "<<one[3]<<" PENNY(S)"<<endl;
		count++;
	}
	return 0;
}