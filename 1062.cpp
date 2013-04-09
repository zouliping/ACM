#include <iostream>

using namespace std;

int main(void)
{
	int num;
	while(cin>>num)
	{
		if(num == 0)
			exit(0);

		int i,j;
		int Min,Max;
		int d[num];
		for(i = 0;i < num;i++)
			cin>>d[i];

		sort(d,d+num);
		Min = d[num - 1];
		for(i = 0;i < num - 1;i++)
			Min = Min * d[num-i-2] + 1;
		for(i = 0;i<num - 1;i++)
		{
			d[i+1] = d[i] * d[i+1] + 1;
			for(j = i + 1;j < num - 1;j++)
			{
				if(d[j] > d[j+1])
					swap(d[j],d[j+1]);
			}
		}
		Max = d[num-1];
		cout<<Max - Min<<endl;
	}
	return 0;
}