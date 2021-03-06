/************************************************************************/
/*						           MaxFlow solve graph cut program                                                            */
/************************************************************************/
/*
File description:
This program for graph cut based on Ford - Fulkerson Algorithm.
Input: 
	M(edge number) N(node number)
	then M lines input 3 parameters each line:
		start_point end_point edge_capacity
	e.g 5 4 1 4 40 1 2 20 2 4 10 4 3 30 3 2 10
output:
	Line 1:maxflow value
	Line2:nodes in Class 1
	e.g 
	MAX Flow is 50
	nodes in class S: 1 2
=========================================================================
CreateTime:2011-8-8
Author:@Zhang Ruiqing
*/
#include<iostream>
#include<queue>
using namespace std;
#define N 250//point
#define M 250*250//edge
#define INF 1000000000
#define min(a,b) a<b?a:b

int pre[N],map[N][N];
int minlen[N];//minlen[i] represents min length from s to i
int pathmin[N];//min flow in this path from i to t
queue<int>Q;

int n,m,s,t;

void init(int s)
{
	memset(pre,0,sizeof(pre));
	for(int i=0;i<=n;i++)
		minlen[i]=pathmin[i]=INF;
	minlen[s]=0;
}

bool bfs(int s,int t)
{
	init(s);
	//push start node
	Q.push(s);
	while(!Q.empty())
	{
		int now=Q.front();
		Q.pop();
		for(int i=1;i<=n;i++)
		{
			if(map[now][i]!=0&&minlen[now]+map[now][i]<minlen[i])
			{
				minlen[i]=minlen[now]+map[now][i];
				pre[i]=now;
				pathmin[i]=min(pathmin[now],map[now][i]);
				Q.push(i);
			}
		}
	}
	if(minlen[n]==INF)
		return false;
	return true;
}

int max_flow(int s,int t)
{
	int res=0;
	while(bfs(s,t))//if can find an augment road
	{
		int minflow=pathmin[n];//minimal flow in the path
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

int main()
{
	int i,j;
	int a,b,c;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		memset(map,0,sizeof(map));
		for(i=0;i<m;i++)
		{
			cin>>a>>b>>c;
			map[a][b]+=c;
		}
		s=1;
		t=n;
		cout<<"MAX Flow is "<<max_flow(s,t)<<endl;

		cout<<"nodes in class S: 1 ";
		for(i=0;i<n;i++)
		{
			if(pathmin[i]!=INF)
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}