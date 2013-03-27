#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main()
{
	int times,i;

	cin>>times;

	double R[times],sinValue[times],r[times];
	int n[times];

	for(i=0;i<times;i++)
		cin>>R[i]>>n[i];
	for(i=0;i<times;i++)
	{
		sinValue[i] = sin(double(PI/n[i]));
		r[i] = (R[i]*sinValue[i])/(1.0+sinValue[i]);
		cout<<"Scenario #"<<i+1<<":"<<endl;
		cout<<setprecision(3)<<fixed<<r[i]<<endl<<endl;
	}
	return 0;
}