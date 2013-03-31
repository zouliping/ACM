#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		int r,e,c;
		cin>>r>>e>>c;
		if(e-c>r)
			cout<<"advertise"<<endl;
		else if(e-c==r)
			cout<<"does not matter"<<endl;
		else
			cout<<"do not advertise"<<endl;
	}
	return 0;
}