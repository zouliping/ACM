#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a == 0 && b == 0)
			exit(0);
		int i;
		vector<int> digit;

		for(i = 0;i < b * 3;i++)
		{
			a *= 10;
			int num = a / b;
			digit.push_back(num % 10);
			a = a - num * b;
		}

		for(i=0;i<digit.size();i++)
			cout<<digit[i]<<endl;

		int index = 0,j = 0;
		int save = 0;
		bool isRepeated = true;
		bool flag = true;
		int digitSize = digit.size();

		for(i = 1;i < digitSize;i++)
		{
			if(digit[index] == digit[i])
			{
				int tmp = i;
				int count = 0;
				cout<<"i = "<<i<<endl;

				if(flag)
				{
					flag = false;
					for(j = index;j < i;j++)
					{
						if(digit[j] != digit[tmp + j])
						{
							cout<<"repeated false "<<i<<endl;
							isRepeated = false;
							index++;
							break;
						}
						else
						{
							count++;
							isRepeated = true;
						}
					}
				}
				else
				{
					for(j = index;j < save;j++)
					{
						if(digit[j] != digit[tmp + j])
						{
							cout<<"repeated false "<<i<<endl;
							isRepeated = false;
							index++;
							break;
						}
						else
							isRepeated = true;
					}
				}	

				if(isRepeated)
				{
					i = j + tmp - 1;
					save = count;
				}
				if(i > digitSize - digitSize % save)
					break;
			}
		}

		if(isRepeated)
			cout<<"is repeated and count = "<<save<<endl;
		else
			cout<<"is not"<<endl;
	}
	return 0;
}