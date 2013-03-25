#include <iostream>

using namespace std;

int main()
{
	char *city = new char[150];
	int dis,miles = 0;
	char flag;
	bool tag = false;

	while(!tag)
	{
		while(true)
		{
		cin>>city;
		if(city[0] == '0')
			break;
		else if(city[0] == '#')
			exit(0);

		cin>>city>>dis>>flag;
		if(flag == 'F')
		{
			miles += 2*dis;
		}
		else if(flag == 'B')
		{
			miles += (int)(1.5*dis + 0.5);
		}
		else if(flag == 'Y')
		{
			if(dis>500)
				miles += dis;
			else
				miles += 500;
		}
		tag = true;
		}
	

	if(tag)
	{
		cout<<miles<<endl;
		miles = 0;
		tag = false;
	}
	}
	return 0;
}