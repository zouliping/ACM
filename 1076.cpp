#include <iostream>

using namespace std;

int partition(float* array, int left, int right)
{
	int index = left;
	float pivot = array[index];       
	swap(array[index], array[right]);
	for (int i=left; i<right; i++)
	{
		if (array[i] > pivot)    // 降序
			swap(array[index++], array[i]);
	}
	swap(array[right], array[index]);
	return index;
}
 
void qsort(float* array, int left, int right)
{
	if (left >= right) 
		return;
	int index = partition(array, left, right);
	qsort(array, left, index - 1);
	qsort(array, index + 1, right);
}

int calcCount(int d)
{
	int i,result = 0;
	for(i=1;i<=d;i++)
		result += i;
	return result;
}

int main(void)
{
	int d;
	while(cin>>d)
	{
		int i,j;
		int num = calcCount(d);
		float digit[num];


	}
	return 0;
}