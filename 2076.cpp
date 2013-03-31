#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	int A,B,C;
	while(cin>>x>>y>>z)
	{
		A =(x+z)/2-y;
		B = 2*y-(3*x+z)/2;
		C = x;

		int result[3],i;
		result[0] = 9*A+3*B+C;
		result[1] = 16*A+4*B+C;
		result[2] = 25*A+5*B+C;

		for(i=0;i<3;i++)
		{
			cout<<result[i];
			if(i!=2)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}