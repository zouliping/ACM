#include <iostream>

using namespace std;

int main()
{
	int num;
	while(1)
	{
		cin>>num;
		if(num==-1)
			exit(0);
		int miles[11],mHour[11]={0};
		int i,total=0;
		for(i=1;i<=num;i++)
			cin>>miles[i]>>mHour[i];

		for(i=1;i<=num;i++)
			total += miles[i]*(mHour[i]-mHour[i-1]);

		cout<<total<<" miles"<<endl;
	}
}