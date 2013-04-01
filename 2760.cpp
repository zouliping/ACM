#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double a;
	while(cin>>a)
	{
		double s;
		s=(1.0-sqrt(3.0)+(acos(-1.0)/3))*a*a;
		cout<<setprecision(3)<<fixed<<s<<endl;
	}
	return 0;
}