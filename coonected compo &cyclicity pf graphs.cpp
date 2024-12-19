/*#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int>g[N];//(maintains adjacency list (array of vectors))
bool vis[N];//(a visited array is maintained to mark visited nodes)
vector<vector<int>>cc;//(all conected compo are stored in it)
vector<int>current_cc;//(each conected compo is stored in it)

void dfs(int vertex)
{
  vis[vertex]=true;
  current_cc.push_back(vertex);
  for(int child:g[vertex])
  {  
    if(vis[child]) continue;
    
    dfs(child);
    }
}

int main()
{   cout<<"enter the no. of vertices and edges of garph"<<endl;

    int n,e;
    cin>>n>>e;
    cout<<"enter vertices having edges between them"<<endl;

    for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
    }
    int count=0;
    for(int i=1;i<=n;i++){
    if(vis[i]) continue;
    current_cc.clear();
    dfs(i);
    cc.push_back(current_cc);//(putting the whole vector at once in cc vector)
    count++;
    }

    cout<<"the no. of connected components of graph are"<<cc.size()<<endl;
    for(auto c_cc:cc)
    {for(int vertex:c_cc)
    cout<<vertex<<" ";

    cout<<endl;
    }

}
*/
//cycle detecting in a given graph
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int>g[N];
bool vis[N];

bool dfs(int vertex,int par)
{
  vis[vertex]=true;
  bool loopexists=false;

  for(int child:g[vertex]){
    if(vis[child] &&child==par) continue;//(here, we check two conditions,1.if the child is already visited,2.if the child has been a parent  once)
    if(vis[child]) return true;

    loopexists |=dfs(child,vertex);//(|means OR. that is if atleast one true is returned by dfs then the value of loopexists become 1. )
  }

  return loopexists;
}

int main()
{   cout<<"enter the no. of vertices and edges of garph"<<endl;

    int n,e;
    cin>>n>>e;
    cout<<"enter vertices having edges between them"<<endl;

    for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
    }

    bool loopexists=false;
    for(int i=1;i<=n;i++)
    {
      if(vis[i]) continue;

      if(dfs(i,0))
      {loopexists=true;
      break;}
    }

    cout<<"loop existent value is"<<loopexists<<endl;

}

