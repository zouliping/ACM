#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string chr = "pqrstuvwxyz";
	int size = chr.size() - 1;
	string test;

	while(cin>>test)
	{
		int i = test.size() - 1;
		bool flag = true;
		int tag = 0;
		for(i;i>=0;i--)
		{
			string tmp = test.substr(i,1);
			if(chr.find(tmp) <= size)
				tag++;
			else if(tmp == "N")
			{
				if(tag == 0)
				{
					flag = false;
					break;
				}
			}
			else if(tmp == "C" || tmp == "D" || tmp == "E" || tmp == "I")
			{
				if(tag >= 2)
					tag--;
				else
				{
					flag = false;
					break;					
				}
			}
			else
			{
				flag = false;
				break;
			}
		}
		if(tag > 1 || tag == 0)
			flag = false;

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		tag = 0;
		flag = true;
	}		
	return 0;
}