#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1 [N] [N];//declaring this globally initializes it with all zeroes.

vector<pair<int,int>>graph2[N];
int main() {
cout<<"enter no. of vertices and edges and weight respectively"<<endl;

int n, m,wt;
cin >> n >> m>>wt;
for(int i = 0; i < m; ++i) {
int v1, v2;
cin >> v1 >> v2;
graph1 [v1] [v2] = wt;//matrix
graph1 [v2] [v1] = wt;


graph2[v1].push_back({v2,wt});//list
graph2[v2].push_back({v1,wt});
}
for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
cout<<graph1[i][j];
cout<<endl;}

//i,j connected ? ,i,j,>wt ?
if(graph1[i][j]==1){
    cout<<"connected"<<endl;
    graph1[i][j];//wt.
}



for(pair<int,int> child:graph2[i]){
    if(child.first==j){
        cout<<"connected"<<endl;
        child.second;
    }
}
}
//adjacency matrix
// 0(N^2 space complexity
// N·=·10^5

// adjacency list
//o(n+m)
//N=10^5,E<10^7

