#include <stdio.h>

int main()
{
	char a;
	int count = 0;

	while(true)
	{
		a = getchar();
		if(a == EOF)
			return 0;
		else if(a != '"')
			putchar(a);
		else
		{
			count++;
			if(count % 2 == 1)
				printf("``");
			else
				printf("''");
		}
	}
	return 0;
}