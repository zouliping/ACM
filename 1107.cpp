#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int d)
{
	for(int i = 2;(i * i) < (d+1);i++)
		if(!(d % i))
			return false;
	return true;
}

int main(void)
{
	int maxNum,count;
	while(cin>>maxNum>>count)
	{
		int i;
		vector<int> resNum;
		resNum.push_back(1);
		for(i = 2;i <= maxNum;i++)
			if(isPrime(i))
				resNum.push_back(i);

		int size = resNum.size();
		int printCount ;
		if(size % 2 == 0)
			printCount = 2 * count;
		else
			printCount = 2 * count - 1;

		int index = 0;
		if(printCount < maxNum)
			index = (size - printCount) / 2;
		cout<<maxNum<<" "<<count<<":";
		for(i = index;i < index + printCount;i++)
		{
			if(i < size)
			{
					cout<<" "<<resNum[i];
			}
		}
		cout<<endl<<endl;			

		resNum.clear();
	}
	return 0;
}