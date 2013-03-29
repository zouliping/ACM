#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num,a,i;

	cin>>num;
	while(num--)
	{
		cin>>a;
		char h[8]={0},test[8];
		char result[8]={0};
		sprintf(h,"%08X",a);
		//int size = strlen(h);

		/*if(size<8)
		{
			for(i=0;i<8-size;i++)
				result[i] = '0';
			for(i=8-size;i<8;i++)
				result[i] = h[i-8+size];
		}
		else if(size==8)
		{
			for(i=0;i<8;i++)
				result[i] = h[i];
		}*/

		for(i=6;i>=0;i-=2)
		{
			/*if(isalpha(h[i]))
				h[i] = toupper(h[i]);
			if(isalpha(h[i+1]))
				h[i+1] = toupper(h[i+1]);*/

			cout<<"0x"<<h[i]<<h[i+1];
			if(i!=0)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}