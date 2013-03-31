#include <iostream>

using namespace std;

int m;

long getFunc(int n)
{
	if(n<=3)
		return n;
	else
	{
		//return getFunc(n-1)+getFunc(n-3); 使用递归效率太低
		long x=1,y=2,z=3,tmp=0;
		int i;
		for(i=4;i<=n;i++)
		{
			z = z + x;
			tmp = y;
			y = z - x;
			x = tmp % m;
			y = y % m;
			z = z % m;
		}
		return z;
	}
		
}

int main()
{
	int n;
	while(1)
	{
		cin>>n>>m;
		if(!n && !m)
			exit(0);

		long calc;
		int result;
		calc = getFunc(n);
		result = calc % m;
		if(result<0)
			result += m;
		cout<<result<<endl;
	}
	return 0;
}