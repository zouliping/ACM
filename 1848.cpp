#include <iostream>
#include <math.h>
#include <utility>

using namespace std;

int seq[3000],dif[3000];

int partition(int* array, int left, int right)
{
	int index = left;
	int pivot = array[index];       
	swap(array[index], array[right]);
	for (int i=left; i<right; i++)
	{
		if (array[i] > pivot)    // 降序
			swap(array[index++], array[i]);
	}
	swap(array[right], array[index]);
	return index;
}
 
void qsort(int* array, int left, int right)
{
	if (left >= right) 
		return;
	int index = partition(array, left, right);
	qsort(array, left, index - 1);
	qsort(array, index + 1, right);
}

int main()
{
	int num=0;
	
	while(cin>>num)
	{
		int i;
		bool flag=true;

		for(i=0;i<num;i++)
			cin>>seq[i];
		for(i=0;i<num-1;i++)
			dif[i] = abs(seq[i]-seq[i+1]);

		qsort(dif,0,num-1);

		for(i=0;i<num-1;i++)
		{
			if(dif[i]!=(num-1-i))
			{
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	}
	return 0;
}