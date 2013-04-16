#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int n;
	int primes[51];
	int i,j;
	int flag = 0,num = 1;

	primes[0] = 2;
	for(i = 3;i <= 101;i += 2)
	{
		int tmp = sqrt(i);
		flag = 1;
		for(j = 3;j <= tmp;j += 2)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)
			primes[num++] = i;
	}


	int step,k;
	int digit[8];

	while(scanf("%d",&n) == 1 && n)
	{
		printf("%3d! =",n);

		for(i = 0;i < num;i ++)
		{
			step = 0;
			digit[0] = 1;
			for(j = 1;j < 8;j++)
			{
				digit[j] = digit[j - 1] * primes[i];
				if(digit[j] > 100)
					break;
			}
			for(k = 1;k <= j;k++)
			{
				if(n >= digit[k])
				{
					step += n / digit[k];
				}
			}

			if(step != 0)
			{
				if(i == 15)
				{
					printf("\n      ");
				}
				printf("%3d",step);
			}
			else
				break;
		}
		printf("\n");
	}
	return 0;
}