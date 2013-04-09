#include <iostream>

#define MAX 1000000

using namespace std;

int self(int d)
{
	int sum = 0;
	while(d != 0)
	{
		sum += d%10;
		d /= 10;
	}
	return sum;
}

int main()
{
	char test[MAX+1] = {0};
	int i,d;

	for(i = 0;i < MAX;i++)
	{
		d = i + 1;
		if(test[d] == 0)
		{
			while(1)
			{
				d += self(d);
				if(d <= MAX)
				{
					if(test[d] == 0)
						test[d] = 1;
					else
						break;
				}
				else
					break; 
			}
		}
	}

	for(i = 1;i <= MAX;i++)
	{
		if(test[i] == 0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}