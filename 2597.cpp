#include <iostream>

using namespace std;

int main()
{
	double inital,rate,target;
	while(cin>>inital>>rate>>target)
	{
		int i=1;
		while(inital<target)
		{
			inital *= (1.0+rate/100.0);
			i++;
		}
		cout<<i-1<<endl;
	}
}