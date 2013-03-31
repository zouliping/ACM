#include <iostream>

using namespace std;

int getFunc(int n)
{
	if(n<2)
		return n;
	else
	{
		int x=0,y=1,i;
		for(i=2;i<=n;i++)
		{
			y = x + y;
			x = y - x;
		}
		return y;
	}
		
}

int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		int d,result;
		cin>>d;
		result = getFunc(d);
		cout<<result<<endl;
	}
	return 0;
}