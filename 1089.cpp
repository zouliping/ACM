#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	map<string,string> dic;
	vector<string> tar;
	string key,in = "";

	while(cin>>in && in != "XXXXXX")
	{
		key = in;
		sort(in.begin(),in.end());
		dic[key] = in;
	}

	while(cin>>in && in != "XXXXXX")
	{
		sort(in.begin(),in.end());
		tar.push_back(in);
	}

	int i;
	for(i = 0;i < tar.size();i++)
	{
		bool flag = true;
		for(map<string,string>::iterator it = dic.begin();it != dic.end();it++)
		{
			if(it->second == tar[i])
			{
				flag = false;
				cout<<it->first<<endl;
			}
		}
		if(flag)
			cout<<"NOT A VALID WORD"<<endl;
		cout<<"******"<<endl;
	}
	return 0;
}