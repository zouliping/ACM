#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alpha = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string origin;
	while(1)
	{
		getline(cin,origin,'\n');
		if(origin=="#")
			exit(0);
		int i,sum=0;
		for(i=0;i<origin.size();i++)
		{
			int position = alpha.find(origin[i]);
			sum += position*(i+1);
		}
		cout<<sum<<endl;
	}
	return 0;
}