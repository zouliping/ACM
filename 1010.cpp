#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int hour,minute;
	float hDegree,mDegree,degree;

	while(true)
	{
		cin>>hour>>minute;
		if(hour==0 && minute==0)
			exit(0);

		mDegree = minute*6;
		hDegree = hour*30 + minute*0.5;

		degree = fabs(mDegree-hDegree);
		if(degree<=180)
			cout<<"At "<<hour<<":"<<setw(2)<<setfill('0')<<minute<<" the angle is "<<setiosflags(ios::fixed)<<setprecision(1)<<degree<<" degrees."<<endl;
		else
		{
			degree = 360-degree;
			cout<<"At "<<hour<<":"<<setw(2)<<setfill('0')<<minute<<" the angle is "<<setiosflags(ios::fixed)<<setprecision(1)<<degree<<" degrees."<<endl;
		}
	}
	return 0;
}