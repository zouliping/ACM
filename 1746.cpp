#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	double speedMin[3] = {4.5,6.0,5.0};
	int weightMin[3] = {150,300,200};
	int strengthMin[3] = {200,500,300};
	double speed;
	int weight,strength;
	int flag,i;

	while(true)
	{
		vector<string> position;
		cin>>speed>>weight>>strength;
		if(!speed && !weight && !strength)
			exit(0);

		if(speed<=speedMin[0] && weight>=weightMin[0] && strength>=strengthMin[0])
			position.push_back("Wide Receiver");
		if(speed<=speedMin[1] && weight>=weightMin[1] && strength>=strengthMin[1])
			position.push_back("Lineman");
		if(speed<=speedMin[2] && weight>=weightMin[2] && strength>=strengthMin[2])
			position.push_back("Quarterback");

		if(position.size()==0)
			cout<<"No positions"<<endl;
		else
		{
			for(i=0;i<position.size();i++)
				cout<<position[i]<<" ";
			cout<<endl;
		}
	}

	return 0;
}