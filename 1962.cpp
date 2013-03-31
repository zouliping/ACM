#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	cin>>num;

	while(num--)
	{
		int classNum,i,aboveNum=0;
		cin>>classNum;
		int score[classNum],totalScore=0;
		float avgScore,percentage;

		for(i=0;i<classNum;i++)
		{
			cin>>score[i];
			totalScore += score[i];
		}
		avgScore = 1.0*totalScore/classNum;	

		for(i=0;i<classNum;i++)
		{
			if(score[i]>avgScore)
				aboveNum++;
		}
		percentage = 100.0*aboveNum/classNum;
		cout<<setprecision(3)<<fixed<<percentage<<"%"<<endl;
	}
	return 0;
}