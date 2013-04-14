#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define MAX   0x7FFFFFFF
int route[201][201];
int c[201][201];
int f[201][201];
struct queue{
     int parent;
     int node;
};
queuequeue[2000];
int last;
int visited[201];
int M;
void EdmondsKarp()
{
     int i, j;
     int temp;
     int from,to;
     int pointer;
     int minC;
     int parent;
     while(1){
         memset(visited, 0, sizeof(visited));
         last = 0;
         queue[last].parent = 0;
         queue[last++].node = 1;
         pointer = -1;
         for(i =0; i < last; i++){
              //BFS，找增广路径
              temp = queue[i].node;
              for(j= 1; j <= M; j++){
                   if((visited[j]== 0)&&
                       (c[temp][j] != 0))
                   {
                       visited[j] = 1;
                       queue[last].node = j;
                       queue[last++].parent = i;
                       if(j == M){
                            //到达汇结点，找到一条增广路径
                            pointer = last - 1;
                            break;
                       }
                   }
              }
              if(pointer!= -1)
              {
                   break;
              }
         }
         if(pointer== -1)
         {
              //没有找到增广路径
              break;
         }
         minC = MAX;
         temp = pointer;
         while(temp!= 0){
              //计算增光路径的流
              parent = queue[temp].parent;
              from = queue[parent].node;
              to = queue[temp].node;
              if(minC> c[from][to]){
                   minC = c[from][to];
              }
              temp = parent;
         }
         temp = pointer;
         while(temp!= 0){
              //修改残留网络
              parent = queue[temp].parent;
              from = queue[parent].node;
              to = queue[temp].node;
              c[from][to] = c[from][to] - minC;
              c[to][from] = c[to][from] + minC;
              f[from][to] = f[from][to] + minC;
              f[to][from] = -f[from][to];
              temp = parent;
         }
     }
}
int main()
{
     int N;
     int i;
     int temp;
     int from,to;
     int flow;
     while(cin>> N >> M){
         memset(c, 0, sizeof(c));
         memset(route, 0, sizeof(route));
         memset(f, 0, sizeof(f));
         for(i =0; i < N; i++){
              cin >> from >> to;
              cin >> temp;
              route[from][to] += temp;
              c[from][to] = route[from][to];
         }
         EdmondsKarp();
         flow = 0;
         for(i =2; i <= M; i++)
         {
              flow += f[1][i];
         }
         cout << flow << endl;
     }
}