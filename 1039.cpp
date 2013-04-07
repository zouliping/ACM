#include <iostream>

using namespace std;

int factorial(int d)
{
	int i,count = 0;
	long long int result = 1;
	for(i=1;i<=d;i++)
	{
		result *= i;
		if(result % 10 == 0)
		{
			result /= 10;
			count++;
		}
	}
	return count;
}

int main(void)
{
	int num;
	cin>>num;
	while(num--)
	{
		int t;
		cin>>t;
		cout<<factorial(t)<<endl;
	}
	return 0;
}