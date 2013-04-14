#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	int k,e;
	int printNum = 1;
	while(cin>>k>>e)
	{
		vector<string> keywords;
		map<string,string> excuses;
		int findNum[20];
		int i,j;

		for(i = 0;i < k;i++)
		{
			string tmp;
			cin>>tmp;
			keywords.push_back(tmp);
		}
		for(i = 0;i < e;i++)
		{
			string tmp,str;
			getline(cin,tmp);
			str = tmp;
			transform(tmp.begin(),tmp.end(),tmp.begin(),::tolower);
			excuses[str] = tmp;
		}

		int max = 0,index = 0;
		string maxStr[20];
		for(map<string,string>::iterator it = excuses.begin();it != excuses.end();it++)
		{
			int count = 0;
			string exc = it->second;
			int size = exc.size();
			for(j = 0;j < k;j++)
			{
				if(exc.find(keywords[j]) < size)
					count++;
			}
			if(count > max)
			{
				max = count;
				index = 0;
				maxStr[index++] = it->first;
			}
			else if(max == count)
				maxStr[index++] = it->first;
		}

		cout<<"Excuse Set #"<<printNum<<endl;
		for(i = 0;i < index;i++)
			cout<<maxStr[i]<<endl;
		cout<<endl;
		printNum++;
	}
}