#include <iostream>

using namespace std;

int main()
{
	int i,num;
	cin>>num;

	int brainNum[num],needed[num];
	for(i=0;i<num;i++)
		cin>>brainNum[i]>>needed[i];
	for(i=0;i<num;i++)
	{
		if(needed[i]<=brainNum[i])
			cout<<"MMM BRAINS"<<endl;
		else
			cout<<"NO BRAINS"<<endl;
	}
	return 0;
}