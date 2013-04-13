#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int k,e;
	while(cin>>k>>e)
	{
		vector<string> keywords;
		vector<string> excuses;
		vector<int> findNum;
		int i,j;

		for(i = 0;i < k;i++)
		{
			string tmp;
			cin>>tmp;
			keywords.push_back(tmp);
		}
		for(i = 0;i < e;i++)
		{
			string tmp;
			cin>>tmp;
			excuses.push_back(tmp);
		}

		for(i = 0;i < e;i++)
		{
			int count = 0;
			string exc = excuses[i];
			int size = exc.size();
			for(j = 0;j < k;j++)
			{
				if(exc.find(keywords[j]) < size)
					count++;
			}
			findNum.push_back(count);
		}

		int max = findNum[0];
		for(i = 1;i < e;i++)
		{
			if(findNum[i] > max)
		}
	}
}