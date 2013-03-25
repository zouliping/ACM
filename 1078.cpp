#include <iostream>
#include <iomanip>

using namespace std;

int calcFactorial(int n)
{
	int i,result = 1;
	if(n == 0)
		return 1;

	for(i=1;i<=n;i++)
		result *= i;
	return result;
}

int main()
{
	int n,d;
	double e = 0.0;
	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;

	for(n=0;n<=9;n++)
	{
		for(d=0;d<=n;d++)
		{
			e += 1.0/(calcFactorial(d));
		}
		if(n==8)
			cout<<n<<" "<<setw(11)<<setfill('0')<<setiosflags(ios::left)<<e<<endl;
		else
			cout<<n<<" "<<setprecision(10)<<e<<endl;
		e = 0.0;
	}

}