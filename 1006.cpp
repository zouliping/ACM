#include <iostream>

using namespace std;

int main()
{
	int s,d;
	while(cin>>s>>d)
	{
		if(s == 0 && d == 0)
			exit(0);
		else if(s == 0 && d != 0)
			cout<<0<<endl;
		else if(s*(d+1) % 60 == 0)
			cout<<1<<endl;
		else if(s*(d+1)*(d+1) % 60 == 0)
			cout<<2<<endl;
		else
			cout<<"Impossible"<<endl;
	}
	return 0;
}