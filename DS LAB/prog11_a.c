#include<stdio.h>
#define MAX 20
int adj[MAX][MAX],n,queue[100],f=0,r=-1,stack[100],top=-1;//queue and stack variables
int visit[MAX];
void create();
void bfs(int);
void dfs(int);
void main()
{
int i,ch;
printf("enter number of nodes");
scanf("%d",&n);
do
{
printf("\n1.create\n2.Print:BFS\n3.connected or not\n4.exit:");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
break;
case 2: for(i=0;i<n;i++)
{
visit[i]=0;
}
printf("\nBFS:");
bfs(0);
break;
case 3: for(i=0;i<n;i++)
{
visit[i]=0; //initialised visited to 0
}
printf("\nDFS:");
dfs(0);

for(i=0;i<n;i++)
{
if(visit[i]==1)
{//Printing the DFS result
printf("\t%d",visit[i]);
}
else
{
printf("Graph is not connected");
}
}
break;
case 4 : break;
default: break;
}
}while(ch!=4);

}
void create()//create adjacency list
{
int i,j,x;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
adj[i][j]=0;
else
{
printf("\n%d to %d",i,j);
printf("\npress 1: connected\npress 0:not connected");
scanf("%d",&x);
adj[i][j]=x;
}
}
}
}
void bfs(int v)
{
int i,j;


if(visit[v]==0)
{
printf("%d\t",v);
visit[v]=1;
}
for(j=0;j<n;j++)
{
if((adj[v][j]==1)&&!visit[j])
{
queue[++r]=j;
}
}
if(f<=r)
{
visit[f]=1;
bfs(queue[f++]);
}
}
void dfs(int v)
{
int f=0,j;
if(visit[v]==0)
{
printf("%d\t",v);
visit[v]=1;
stack[++top];
}
for(j=0;j<n;j++)
{
if(adj[v][j]==1 &&!visit[j])
{
dfs(j);
f=1;
}
}
if(f==0 &&top>-1)
dfs(stack[top--]);

}


