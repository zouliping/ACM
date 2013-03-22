#include <iostream>

using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int *p = new int[m];
		int *a = new int[m];
		int pTmp,aTmp,amount=0,price=0;
		int i,j,k,l;	
		bool flag = true;


		for(i=0;i<m;i++)
		{
			cin>>p[i]>>a[i];
		}

		k = m;
		while(flag)
		{
			flag = false;
			for(j=1;j<k;j++)
			{
				if(p[j-1] > p[j])
				{
					pTmp = p[j];
					p[j] = p[j-1];
					p[j-1] = pTmp;
					aTmp = a[j];
					a[j] = a[j-1];
					a[j-1] = aTmp;
					flag = true;
				}
			}
			k--;
		}

		for(i=0;i<m;i++)
		{
			amount += a[i];
			price += p[i]*a[i];
			l = i;
			if(amount > n)
				break;
		}

		if(amount > n)
		{
			price -= p[l]*a[l];
			price += p[l]*(a[l]-(amount-n));
		}

		printf("%d\n",price);
	}
	return 0;
}