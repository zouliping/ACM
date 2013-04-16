#include <stdio.h>
#include <string.h>

//八段数码管
typedef struct 
{
	int vertical[2][2];
	int horizontal[3];
}Number;

int main()
{
	int s;
	char n[9];
	Number number[9];

	while(scanf("%d %s",&s,n) == 2)
	{
		if(s == 0 && n[0] == '0')
			return 0;

		int size = strlen(n);
		int i,j,k,l;

		for(i = 0;i < size;i++)
		{
			switch(n[i])
			{
				case '0':
					number[i].vertical[0][0] = 1;
					number[i].vertical[0][1] = 1;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 0;
					number[i].horizontal[2] = 1;
					break;
				case '1':
					number[i].vertical[0][0] = 0;
					number[i].vertical[0][1] = 0;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 0;
					number[i].horizontal[1] = 0;
					number[i].horizontal[2] = 0;
					break;
				case '2':
					number[i].vertical[0][0] = 0;
					number[i].vertical[0][1] = 1;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 0;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 1;
					break;
				case '3':
					number[i].vertical[0][0] = 0;
					number[i].vertical[0][1] = 0;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 1;
					break;
				case '4':
					number[i].vertical[0][0] = 1;
					number[i].vertical[0][1] = 0;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 0;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 0;
					break;
				case '5':
					number[i].vertical[0][0] = 1;
					number[i].vertical[0][1] = 0;
					number[i].vertical[1][0] = 0;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 1;
					break;
				case '6':
					number[i].vertical[0][0] = 1;
					number[i].vertical[0][1] = 1;
					number[i].vertical[1][0] = 0;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 1;
					break;
				case '7':
					number[i].vertical[0][0] = 0;
					number[i].vertical[0][1] = 0;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 0;
					number[i].horizontal[2] = 0;
					break;
				case '8':
					number[i].vertical[0][0] = 1;
					number[i].vertical[0][1] = 1;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 1;
					break;
				case '9':
					number[i].vertical[0][0] = 1;
					number[i].vertical[0][1] = 0;
					number[i].vertical[1][0] = 1;
					number[i].vertical[1][1] = 1;
					number[i].horizontal[0] = 1;
					number[i].horizontal[1] = 1;
					number[i].horizontal[2] = 1;
					break;
			}
		}

		int rows = s * 2 + 3;
		int cloumns = s + 2;
		int m = -1,n = -1;

		for (i = 0;i < rows;i++)
		{
			if(i == 0)
				n = 0;
			else if(i > 0 && i < s + 1)
				m = 0;
			else if(i == s + 1)
				n = 1;
			else if(i > s + 1 && i < rows - 1)
				m = 1;
			else if(i == rows - 1)
				n = 2;
			
			for(j = 0;j < size;j++)
			{
				for(k = 0;k < cloumns;k++)
				{
					if(i == 0 || i == (s + 1) || i == (rows - 1))
					{
						if(k == 0 || k == s + 1)
							printf(" ");
						else
						{
							if(number[j].horizontal[n] == 1)
								printf("-");
							else
								printf(" ");
						}
					}
					else
					{
						if(k == 0)
						{
							if(number[j].vertical[0][m] == 1)
								printf("|");
							else
								printf(" ");
						}
						else if(k == s + 1)
						{
							if(number[j].vertical[1][m] == 1)
								printf("|");
							else
								printf(" ");
						}
						else
						{
							printf(" ");
						}
					}
				}
				if(j != size - 1)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}