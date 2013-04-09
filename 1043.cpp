#include <iostream>
#include <string>

using namespace std;

string months[19] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
string days[20] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};

int main(void)
{
	int num;
	cin>>num;
	cout<<num<<endl;
	while(num--)
	{
		int i,day,year;
		long dayCount = 0;
		string monthName;
		cin>>day;
		cin.get();
		cin>>monthName>>year;

		dayCount = day + year * 365;
		for(i=0;i<19;i++)
		{
			if(monthName == months[i])
			{
				dayCount += i*20;
				break;
			}
		}
			
		int tYear,tMonth,tDay;
		tYear = dayCount / 260;
		dayCount %= 260;
		tMonth = dayCount % 13 + 1;
		tDay = dayCount % 20;
		cout<<tMonth<<" "<<days[tDay]<<" "<<tYear<<endl;
	}
	return 0;
}