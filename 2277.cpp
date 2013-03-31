#include <iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		int classNum,i,total=0;
		cin>>classNum;
		int apples[classNum];
		for(i=0;i<classNum;i++)
		{
			cin>>apples[i];
			total += apples[i];
		}
			
		if(total%classNum==0)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}