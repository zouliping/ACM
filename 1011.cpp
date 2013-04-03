#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num,i,j,k;
	while(cin>>num)
	{
		vector<string> filenames;
		vector<int> fileLength;
		string tmp;
		int maxLength,columns,fileSize,rows=1;

		for(i=0;i<num;i++)
		{
			cin>>tmp;
			filenames.push_back(tmp);
			fileLength.push_back(tmp.size());
		}

		sort(filenames.begin(),filenames.end());
		sort(fileLength.begin(),fileLength.end());

		maxLength = fileLength[fileLength.size() - 1];
		columns = (60 - maxLength)/(maxLength + 2) + 1;
		fileSize = filenames.size();
		if(columns > fileSize)
		{
			rows = 1;
			columns = fileSize;
		}
		else
			rows = (fileSize + 1) / columns;

		for(i=0;i<60;i++)
			cout<<"-";
		cout<<endl;


		for(i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				int index=0;
				index += i + j*rows; 
				if(index < fileSize)
				{
					cout<<filenames[index];
					if(j!=columns-1)
					{
						for(k=0;k<(maxLength + 2 - (filenames[index]).size());k++)
							cout<<" ";
					}
				}
			}
			cout<<endl;
		}
	}
	return 0;
}