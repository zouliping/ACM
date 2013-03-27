#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num,i,k;
	int j=0,count=1;

	do
	{
		string names[15],result[15];
		cin>>num;
		for(i=0;i<num;i++)
			cin>>names[i];

		if(num%2==0)
		{
			for(i=0;i<num;i+=2)
			{
				result[j] = names[i];
				j++;
			}
			for(k=i-1;k>0;k-=2)
			{
				result[j] = names[k];
				j++;
			}
		}
		else
		{
			for(i=0;i<num;i+=2)
			{
				result[j] = names[i];
				j++;
			}
			for(k=i-3;k>0;k-=2)
			{
				result[j] = names[k];
				j++;
			}
		}

		if(num != 0)
		{
			cout<<"SET "<<count<<endl;
			for(i=0;i<num;i++)
				cout<<result[i]<<endl;
			count++;
			j = 0;
		}
	}while(num!=0);
	return 0;
}