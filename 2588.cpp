#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num,count=1;
	cin>>num;
	while(num--)
	{
		int position;
		string origin;
		cin>>position>>origin;

		origin.erase(position-1,1);
		cout<<count<<" "<<origin<<endl;
		count++;
	}
}