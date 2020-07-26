#include<iostream>
using namespace std;
#include <string.h>
#define MAX 50
int XTotalShapes(char [][MAX],int,int); 
void DFSvisitAll(char [][MAX],int,int,bool[][MAX],int,int);
bool IsConnected(char [][MAX],int,int,bool[][MAX],int,int);
int main()
{
int t;
cin>>t;
while(t--)
{
char mat[MAX][MAX];
int row, col;
cin>>row>>col;
for(int i=0;i<row; i++)
for(int j=0; j<col; j++)
cin>>mat[i][j];
cout<<XTotalShapes(mat,row,col)<<endl;
}
return 0;
}
int XTotalShapes (char mat[] [MAX ], int row, int col)
{
bool visited[MAX] [MAX];
memset (visited,0, sizeof(visited));
int count=0;
for (int i=0;i<row; i++)
for(int j=0; j<col; j++)
if(!visited[i][j]&&mat[i][j]=='X')
{
count++;
DFSvisitAll(mat,row,col,visited, i,j);
}
return count;
}
void DFSvisitAll(char mat[][MAX],int row,int col,bool visited[][MAX],int currR,int currC)
{
visited[currR][currC]=true;
int t1[]={-1,0,0,1};
int t2[]={0,-1,1,0};
for(int k=0;k<4;k++){
if(IsConnected(mat, row, col,visited, currR+t1[k], currC+t2[k]))
DFSvisitAll(mat,row,col,visited, currR+t1[k],currC+t2[k]) ;
}
}
bool IsConnected(char mat[][MAX],int row,int col,bool visited[][MAX],int currR, int currC)
{

return (currR>=0&&currC>=0)&&(currR<row &&currC<col)&&(mat[currR][currC]=='X'&&!visited[currR][currC]); 
}
