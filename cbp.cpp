#include <iostream>
#include <queue>

#define N 200
#define M 40000
#define MAX 10000000
#define min(a,b) a<b?a:b

using namespace std;

int pre[N],map[N][N];
int MinDis[N],MinPath[N];
queue<int> myQueue; 
int n,m;

void init(int s)
{
	memset(pre,0,sizeof(pre));
	for(int i=0;i<=n;i++)
		MinDis[i]=MinPath[i]=MAX;
	MinDis[s]=0;
}

bool bfs(int s,int t)
{
	init(s);

	myQueue.push(s);
	while(!myQueue.empty())
	{
		int now=myQueue.front();
		myQueue.pop();
		for(int i=1;i<=n;i++)
		{
			if(map[now][i]!=0&&MinDis[now]+map[now][i]<MinDis[i])
			{
				MinDis[i]=MinDis[now]+map[now][i];
				pre[i]=now;
				MinPath[i]=min(MinPath[now],map[now][i]);
				myQueue.push(i);
			}
		}
	}
	if(MinDis[n]==MAX)
		return false;
	return true;
}

int max_flow(int s,int t)
{
	int res=0;
	while(bfs(s,t))//if can find an augment road
	{
		int minflow=MinPath[n];//minimal flow in the path
		int point=t;//calculate from end point t to start point s
		while(point!=s)
		{
			int prep=pre[point];
			map[prep][point]-=minflow;//positive road -= flow
			map[point][prep]+=minflow;//nagative road+= flow
			point=prep;
		}
		res+=minflow;
	}
	return res;
}

int main(void)
{
	int num;
	int count = 1;
	cin>>num;
	while(num--)
	{	
		cin>>n>>m;
		int i;
		int from,to;
		int dis,s,t;
		int max = 0;
		memset(map,0,sizeof(map));

		for(i = 0;i < m;i++)
		{
			cin>>from>>to>>dis;
			map[from][to] += dis;
			if(max_flow(s,t) > max)
				cout<<max_flow(s,t) - max<<endl;
		}
		s = 1;
		t = n;

		// cout<<max_flow(s,t)<<endl;
	}
	return 0;
}