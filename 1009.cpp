#include <iostream>
#include <math.h>

using namespace std;

int room[100][100];
int M,bx,by;
bool eat;

void move(int x,int y)
{
	if(room[x][y]>M)
	{
		bx = x;
		by = y;
		M = room[x][y];
		eat = true;
	}
}

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int i,j;
		int cPositionX,cPositionY;
		int mPositionX = 0,mPositionY = 0;
		bool flag = false;
		int t = 0;

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				cin>>room[i][j];
		}
		cin>>cPositionX>>cPositionY;

		while(1)
		{
			room[mPositionX][mPositionY] = 0;
			if(abs(cPositionX-mPositionX)+abs(cPositionY-mPositionY)<=t)
				break;
			else
			{
				eat = false;
				M = 0;
				if(mPositionX > 0)
					move(mPositionX-1,mPositionY);
				if(mPositionX < m-1)
					move(mPositionX+1,mPositionY);
				if(mPositionY > 0)
					move(mPositionX,mPositionY-1);
				if(mPositionY < n-1)
					move(mPositionX,mPositionY+1);

				if(!eat)
				{ 
					flag = true;
					break;
				}
				else
				{
					mPositionX = bx;
					mPositionY = by;
				}
			}
			t++;
		}

		if(flag)
			cout<<"impossible"<<endl;
		else
			cout<<t<<endl;
	}
	return 0;
}