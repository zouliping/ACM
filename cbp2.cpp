#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num;
	int count = 1;
	cin>>num;
	while(num--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int i = 0,j = 0;
		int equalSize = 0;
		int size1 = str1.size();
		int size2 = str2.size();

		for(j = 0;j < size2;j++)
		{
			string tmp = str2.substr(j,1);
			while(i < size1)
			{
				if(str1.find(tmp,i) < size1 && str1.find(tmp,i) + size2 <= size1)
				{
					int tmpSize = 1;
					int mIndex,findIndex;
					findIndex = str1.find(tmp,i);

					for(mIndex = 1;mIndex < size2 - j;mIndex++)
					{
						if(str1.substr(findIndex + mIndex,1) == str2.substr(mIndex,1))
							tmpSize++;
					}
					if(tmpSize > equalSize)
						equalSize = tmpSize;
					i = findIndex + 1;
				}
				else
				{
					i = 0;
					break;
				}
					
			}
		}
		cout<<"Case #"<<count<<": "<<size2 - equalSize<<endl;
		count++;
		equalSize = 0;
	}
	return 0;
}