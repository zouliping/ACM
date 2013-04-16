#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		int k;
		cin>>k;

		int buy = (k * 4) / 5 + 1;
		cout<<buy<<endl;
	}
	return 0;
}