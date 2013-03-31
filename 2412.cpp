#include <iostream>

using namespace std;

int calcSum(int d)
{
	int i,sum=0;
	for(i=1;i<=d;i++)
		sum += i;
	return sum;
}

int calcWeight(int d)
{
	int i,weight=0;
	for(i=1;i<=d;i++)
		weight += i*calcSum(i+1);
	return weight;
}

int main()
{
	int num,count=1;
	cin>>num;
	while(num--)
	{
		int d;
		cin>>d;
		cout<<count<<" "<<d<<" "<<calcWeight(d)<<endl;
		count++;
	}
	return 0;
}