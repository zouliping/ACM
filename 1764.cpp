#include <iostream>
#include <string>

using namespace std;

int main()
{
	string one = "BFPV";
	string two = "CGJKQSXZ";
	string three = "DT";
	string four = "L";
	string five = "MN";
	string six = "R";

	char word[21]={'\0'};
	while(cin>>word)
	{
		int i,record[21]={0};
		int size = strlen(word);

		for(i=0;i<size;i++)
		{
			if(one.find(word[i])<one.size())
				record[i] = 1;
			else if(two.find(word[i])<two.size())
				record[i] = 2;
			else if(three.find(word[i])<three.size())
				record[i] = 3;
			else if(four.find(word[i])<four.size())
				record[i] = 4;
			else if(five.find(word[i])<five.size())
				record[i] = 5;
			else if(six.find(word[i])<six.size())
				record[i] = 6;
		}

		for(i=0;i<size;i++)
		{
			if(record[i]==record[i+1] || record[i]==0)
				continue;
			else
				cout<<record[i];
		}
		cout<<endl;
	}
	return 0;
}