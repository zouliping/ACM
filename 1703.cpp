#include <iostream>
#include <string>
#include <vector>

using namespace std;

void myReverse(string &str)
{
	int i;
	char tmp;
	int size = str.size();

	for(i=0;i<size/2;i++)
	{
		tmp = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = tmp;
	}
}

int main()
{
	int num,i,j;

	while(true)
	{
		string origin,completed;

		cin>>num;
		getchar();
		if(num==0)
			exit(0);
		getline(cin,origin,'\n');
		string::iterator new_end = remove_if(origin.begin(),origin.end(),bind2nd(equal_to<char>(),' '));//去除行数据中的空格
		origin.erase(new_end,origin.end());//去除行数据中的空格

		int size = origin.size();
		int count=0;
		vector<string> result;

		for(i=0;i<size;i+=num)
		{
			string s = origin.substr(i,num);
			if(count%2!=0)
				myReverse(s);
			result.push_back(s);
			count++;
		}
		for(j=0;j<num;j++)
		{
			for(i=0;i<result.size();i++)
				completed += result[i].substr(j,1);
		}
		cout<<completed<<endl;
	}
	return 0;
}