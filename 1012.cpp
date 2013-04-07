#include <cstdio>
#include <cstring>

const int MAX = 10000;

void parse(char* str,int* e)
{
	int i;
	int size = strlen(str)/2;
	for(i=0;i<size;i++)
	{
		sscanf(str,"%2X",&e[i]);
		str += 2;
	}
	
}

int main()
{
	int E[MAX],Ex[MAX],K[MAX],C[MAX];
	char e[2*MAX],ex[2*MAX];

	while(1)
	{
		parse(gets(e),E);
		parse(gets(ex),Ex);
		int size = strlen(e)/2;
		int i;

		K[0] = Ex[0] ^ ' ';
		for(i=0;i<size;i++)
		{
			C[i] = K[i] ^ E[i];
			K[i+1] = Ex[i+1] ^ C[i];
		}

		for(i=0;i<=size;i++)
			printf("%02X",K[i]);
		printf("\n");
	}
	return 0;
}