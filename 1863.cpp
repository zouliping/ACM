#include <iostream>

using namespace std;

int seq[10];

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
	int num,i;

	cin>>num;
	while(num--)
	{
		for(i=0;i<10;i++)
			cin>>seq[i];
		qsort(seq,0,10);
		for(i=9;i>=0;i--)
		{
			cout<<seq[i];
			if(i!=0)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}