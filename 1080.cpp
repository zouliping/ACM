#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string digit;
	while(cin>>digit)
	{
		if(digit == "0")
			exit(0);
		vector<int> num;
		int i = 0,sum = 0;
		bool flag = true;

		while(flag)
		{
			for(i = 0;i < digit.size();i++)
			{
				string tmp = digit.substr(i,1);
				int d = atoi(tmp.c_str());
				num.push_back(d);
			}

			for(i = 0;i < num.size();i++)
				sum += num[i];
			if(sum / 10 == 0)
			{
				cout<<sum<<endl;
				flag = false;
			}

			stringstream ss;
			ss << sum;
			ss >> digit;
			sum = 0;
			num.clear();
		}
	}
	return 0;
}