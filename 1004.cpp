#include <iostream>
#include <math.h>

using namespace std;
static int start = 5;

bool isPrime(int d)
{
	for (int i=3;i*i<=d;i+=2)
	{
		if(d%i == 0)
			return false;
	}
	return true;
}

/*构造回文数
偶数位的回文数不是素数（11除外）
以2，4，6，8开头的回文数不是素数（素数除2外都是奇数）
以5开头的回文数不是素数（可以被5整除）
*/
int creatPalindrome(int d)
{
	if(d<10)
	{
		switch(d)
		{
			case 5:
				start++;
				return 5;
			case 6:
				start++;
				return 7;
			case 7:
			case 8:
			case 9:
				start = 10;
				return 11;
		}
	}

	int length = (int) log10(d*1.0);
	int high = d/(int)(pow(10*1.0,length));
	int palindrome;
	//cout<<"l & h"<<length<<"  "<<high<<endl;

	switch(high)
	{
		case 2:
		case 4:
		case 6:
		case 8:
			start = (high + 1)*(int)(pow(10*1.0,length));
			palindrome = start*(int)(pow(10*1.0,length)) + (high + 1);
			start++;
			return palindrome;
		case 5:
			start = 7*(pow(10,length));
			palindrome = start*(int)(pow(10*1.0,length)) + 7;
			start++;
			return palindrome;
	}

		int reverse = 0;
		palindrome = d*(int)(pow(10*1.0,length));
		d /= 10;	

		while(d)
		{
			reverse = reverse*10 + d%10;
			d /= 10;
		}
		start++;

		return palindrome + reverse;
}

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a%2 == 0)
			a++;
		for(int i=a;i<b;)
		{
			i = creatPalindrome(start);
			//cout<<"creat i "<<i<<endl;
			if(isPrime(i) && i>=a && i<=b)
				cout<<i<<endl;
		}
	}
	return 0;
}