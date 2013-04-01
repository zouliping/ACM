#include <iostream>

using namespace std;

int main()
{
	int n,k,j,i=0;
	while(cin>>n>>k)
	{
		int buf[32]={0},size;
		if(!n && !k)
			exit(0);
		if(n==0)
			i=1;
		while(n>0)
		{
			buf[i] = n % 2;
			n /= 2;
			i++;
		}
		size = i-k;
		if(size<0)
		{
			size = abs(size);
			for(j=0;j<size;j++)
				cout<<"---"<<endl;
		}

		for(i--;i>=0;i--)
		{
			if(buf[i]==0)
				cout<<"---"<<endl;
			else if(buf[i]==1)
				cout<<"- -"<<endl;
		}
		cout<<endl;
		i = 0;
	}
	return 0;
}