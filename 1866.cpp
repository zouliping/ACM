#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int k;
	while(true)
	{
		cin>>k;
		if(k==0)
			exit(0);
		cout<<(int)sqrt(k)<<endl;
	}
	return 0;
}