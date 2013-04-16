#include <stdio.h>

int main()
{
	long m,n;
	while(scanf("%ld%ld",&m,&n) == 2)
	{
		long getNum = n - (m - 1) / 2;
		if(getNum > 0)
			printf("%ld\n", getNum);
		else
			printf("0\n");
	}
	return 0;
}