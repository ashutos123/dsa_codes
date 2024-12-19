#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int>g[N];
bool vis[N];

void dfs(int vertex)
{
  //take action on vertex after entering
  //the vertex
  cout<<vertex<<endl;
//if (vis[vertex]) return;
 vis[vertex]=true;
  for(int child:g[vertex])
  {  cout<<"par"<<vertex<<",child"<<child<<endl;
    if(vis[child]) continue;
    //take action on chld before
  //entering child node
  
    dfs(child);
    //take action on child
    //after exiting child node
}
}
int main()
{   cout<<"enter no. of vertices and edges"<<endl;
    int n,m;
    cin>>n>>m;
    cout<<"enter vertices between which edges are there"<<endl;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
   cout<<"enter the vertex which you want to make root"<<endl;
   int root;
   cin>>root;
    dfs(root);
}