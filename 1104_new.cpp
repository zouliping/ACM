#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a == 0 && b == 0)
			exit(0);

		int r,j,i = 1;
		int isRepeated = 0;
		int divid[1200] = {a};

		cout<<".";

		while(true)
		{
			r = divid[i - 1] * 10 / b;
			divid[i] = divid[i - 1] * 10 % b;
			cout<<r;
			if(divid[i] == 0)
			{
				isRepeated = 1;
				break;
			}
			for(j = 0;j < i;j++)
			{
				if(divid[j] == divid[i])
				{
					isRepeated = 2;
					break;
				}
			}	
			if(isRepeated == 1 || isRepeated == 2)
				break;
			if(i == 49 || (i >= 51 && (i + 1) % 50 == 0))
				cout<<endl;
			i++;
		}
		cout<<endl;
		if(isRepeated == 2)
			cout<<"The last "<<i - j<<" digits repeat forever."<<endl;
		else
			cout<<"This expansion terminates."<<endl;
	}
	return 0;
}