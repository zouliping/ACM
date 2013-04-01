#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pwd;
	while(cin>>pwd)
	{
		if(pwd=="wujiawei")
			cout<<"hit"<<endl;
		else
			cout<<"lose"<<endl;
	}
	return 0;
}