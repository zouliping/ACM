#include <iostream>

using namespace std;

int length[1000]={0};

int partition(int* array, int left, int right)
{
	int index = left;
	int pivot = array[index];       
	swap(array[index], array[right]);
	for (int i=left; i<right; i++)
	{
		if (array[i] > pivot)    
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
	int num;
	cin>>num;
	while(num--)
	{
		int ropesNum,i,nums,max=0;
		cin>>ropesNum;
		nums = ropesNum;
		for(i=0;i<ropesNum;i++)
			cin>>length[i];
		qsort(length,0,ropesNum-1);

		for(i=ropesNum-1;i>=0;i--,nums--)
		{
			if((length[i]*nums)>max)
				max = length[i]*nums;
		}
		cout<<max<<endl;
	}
	return 0;
}