#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.1415926

using namespace std;

int main()
{
	int D,V;
	while(1)
	{
		cin>>D>>V;
		if(!D && !V)
			exit(0);
		float d,tmp;
		tmp = pow(D,3.0);
		d = pow(tmp-6*V/PI,1.0/3);
		cout<<setprecision(3)<<fixed<<d<<endl;
	}
	return 0;
} 