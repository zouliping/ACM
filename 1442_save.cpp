#include <iostream>

using namespace std;

int num[50][50],selectNum[50][50],sortedNum[50][6];
int length[50],jL;

void saveNum(int jl)
{
	int i,j,k,tmp;
	bool flag = true;

	for(i=0;i<6;i++)
		sortedNum[jl][i] = selectNum[jl][i];

	k = 6;
	while(flag)
	{
		flag = false;
		for(j=1;j<k;j++)
		{
			if(sortedNum[jl][j-1] > sortedNum[jl][j])
			{
				tmp = sortedNum[jl][j];
				sortedNum[jl][j] = sortedNum[jl][j-1];
				sortedNum[jl][j-1] = tmp;
				flag = true;
			}
		}
		k--;
	}

	/*for(i=0;i<6;i++)
	{
		cout<<sortedNum[jl][i]<<" ";
	}
	cout<<endl;*/
}

void check(int index,int d,int jl)
{
	int i,k;
	if(index == 6)
	{
		saveNum(jl);
		return;
	}

	for(i=d;i<length[jl];i++)
	{
		selectNum[jl][index] = num[jl][i];
		check(index+1,i+1,jl);
	}
}

int main()
{
	int i;
	jL=-1;

	do
	{
		jL++;
		cin>>length[jL];
		for(i=0;i<length[jL];i++)
			cin>>num[jL][i];
	}while(length[jL]!=0);

	for(i=0;i<jL;i++)
	{
		check(0,0,i);
		//if(i!=jL-1)
			//cout<<endl;
	}	
	return 0;
}