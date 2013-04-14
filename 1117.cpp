#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	char oct[64];
	
	while(cin>>oct)
	{
		int i = 0,index = 1;
		int j;
		int size = strlen(oct);
		double dec = 0.0;

		for(j = 2;j < strlen(oct);j++)
		{
			i = (oct[j] - 48) * 10 /10;
			if(i != 0)
			{
				dec += i * 1.0 / (pow(8,index));
				
			}
			index++;
		}
		for(i = 0;i < size;i++)
			cout<<oct[i];
		cout<<" [8] = ";
		cout<<setprecision(3 * (size - 2))<<dec<<" [10]"<<endl;
	}
	return 0;
}