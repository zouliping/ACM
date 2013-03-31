#include <iostream>
#include <string> 

using namespace std;

void myReverse(string &str)
{
	int i;
	char tmp;
	int size = str.size();

	for(i=0;i<size/2;i++)
	{
		tmp = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = tmp;
	}
}


int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		string test;
		cin>>test;
		myReverse(test);
		cout<<test<<endl;
	}
	return 0;
}