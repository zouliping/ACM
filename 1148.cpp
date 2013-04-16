#include <stdio.h>

int main(void)
{
	int num;
	int count = 1;
	scanf("%d",&num);
	while(num--)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		printf("Scenario #%d:\n",count);
		printf("%d.%s\n\n",m * n,m * n % 2 == 0 ? "00" : "41" );
		count++;
	}
	return 0;
}