#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
int depth[N],height[N];

void dfs(int vertex,int par=0)
{
    for(int child:g[vertex]){
        if(child==par) continue;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child] +1);

    }
}

int main()
{   cout<<"enter no. of nodes"<<endl;
    int n;
    cin>>n;
    cout<<"enter nodes which have edges b/w them"<<endl;

    for(int i=0;i<n-1;i++)
    {int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
    }

    dfs(1);
    
    cout<<"the array containing depth and height  of all nodes is:"<<endl;
    
    for(int i=0;i<=n;i++)
    cout<<depth[i] <<" "<<height[i]<<endl;

}