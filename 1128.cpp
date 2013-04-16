#include <iostream>

#define MAX 100

using namespace std;

int main()
{
	int i,j,k,l;
	int cube[MAX + 1];
	int u,v,w;

	for(i = 2;i <= MAX;i++)
		cube[i] = i * i * i;

	for(i = 2;i <= MAX;i++)
	{
		u = cube[i];
		for(j = 2;j <= i;j++)
		{
			v = u - cube[j];
			if(v > 0)
			{
				for(k = j + 1;k <= i;k++)
				{
					w = v - cube[k];
					if(w >= 0)
					{
						for(l = k + 1;l <= i;l++)
						{
							if(w == cube[l])
								cout<<"Cube = "<<i<<", Triple = ("<<j<<","<<k<<","<<l<<")"<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}