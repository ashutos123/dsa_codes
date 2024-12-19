#include<iostream>
#include<vector>             ///0-->empty cell,1-->fresh oranges,2-->rotten oranges,total time to rotten all oranges in the grid.
#include<queue>
#include<algorithm>
using namespace std;

int rottenoranges(int grid[50][50],int n,int m)
{
    queue<pair<pair<int,int>,int>>q;
    int vis[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {if(grid[i][j]==2)
    {q.push({{i,j},0});
    vis[i][j]=2;}
     else
        vis[i][j]=0;
     }

    int tm=0;
    int drow[4]={-1,0,1,0};
    int dcol[4]={0,1,0,-1};
    while(!q.empty())
    {
      int r=q.front().first.first;
      int c=q.front().first.second;
      int t=q.front().second;
      q.pop();
      int tm=max(tm,t);
      for(int i=0;i<4;i++)
        {int nrow=r+drow[i];
       int ncol=c+dcol[i];
       if(nrow>=0 &&ncol>=0 && nrow<n && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1)
       {q.push({{nrow,ncol},t+1});
       vis[nrow][ncol]=2;}
        }


    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        if(vis[i][j]!=2 && grid[i][j]==1) return -1;



     return tm;
    }





int main()
{
cout<<"enter the size of grid"<<endl;
int n,m;
cin>>n>>m;
int grid[n][m];
cout<<"enter the pattern in which oranges are rotten"<<endl;
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
  cin>>grid[i][j];
cout<<"The grid is "<<endl;
for(int i=0;i<n;i++)
{for(int j=0;j<m;j++)
  cout<<grid[i][j]<<" ";
  cout<<endl;}

 int time=rottenoranges(grid,n,m);
  cout<<"min.time required to rotten all oranges is "<<  time <<endl;

  return 0;

}
