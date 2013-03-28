#include <iostream>

using namespace std;

int main()
{
	int num;
	while(1)
	{
		cin>>num;
		if(num==0)
			exit(0);
		int i,total=0,spend=0;
		int bet[num];
		for(i=0;i<num;i++)
		{
			cin>>bet[i];
			if(spend < 0)
				spend = 0;
			spend += bet[i];
			if(total < spend)
				total = spend;
		}
		if(total > 0)
			cout<<"The maximum winning streak is "<<total<<"."<<endl;
		else
			cout<<"Losing streak."<<endl;
	}
	return 0;
}