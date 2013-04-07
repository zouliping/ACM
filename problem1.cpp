#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<string> mySplit(string str,string pattern)
{
	string::size_type pos;
	vector<string> result;
	str += pattern;
	int size = str.size();

	for(int i=0; i<size; i++)
     {
         pos=str.find(pattern,i);
         if(pos<size)
         {
             string s=str.substr(i,pos-i);
             result.push_back(s);
             i=pos+pattern.size()-1;
         }
     }
     return result;
}

int main(void)
{
	int num,count=1;
	cin>>num;

	while(num--)
	{
		int n,m,i,j;
		cin>>n>>m;
		map<string,string> wordMap;
		vector<string> sentence;
		string key,value;

		for(i=0;i<m;i++)
		{
			cin>>key>>value;
			wordMap.insert(pair<string, string>(key,value));
		}
		string s;
		cin.get();
		getline(cin,s);
		sentence = mySplit(s," ");
		int size = sentence.size();

		map<string, string>::iterator iter;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<size;j++)
			{
				iter = wordMap.find(sentence[j]);
				if(iter != wordMap.end())
					sentence[j] = iter->second;
			}
		}

		cout<<"Case #"<<count<<": ";
		for(i=0;i<size;i++)
		{
			cout<<sentence[i];
			if(i != size-1)
				cout<<" ";
		}
		cout<<endl;
		count++;
	}
	return 0;
}