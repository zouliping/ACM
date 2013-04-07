#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int num;
	while(cin>>num)
	{
		if(num == 0)
			exit(0);

		int i,j,d;
		vector<int> v;
		for(i=0;i<num;i++)
		{
			cin>>d;
			v.push_back(d);
		}

		for(i=0;i<num;i++)
		{
			for(j=i+1;j<num;j++)
			{

			}
		}
	}
	return 0;
}