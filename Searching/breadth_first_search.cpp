
#include<bits/stdc++.h>
using namespace std;
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    queue<int>q;
    vis[s]=1;
    cout<<s<<" ";
    q.push(s);
    vector<int>::iterator i;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        
        for(i=adj[p].begin();i!=adj[p].end();i++){
            if(!vis[*i]){  //if vertex is not visited 
                vis[*i]=1;  //mark vertex visited
                cout<<*i<<" ";
                q.push(*i);
            }
            
        }
        
        
    }
    
}
int main()
{
        
        int N, E;//N-number of vertices and E-number of edges
        cin>>N>>E;
        vector<int> adj[N+1];
        bool vis[N+1] = {false};//Mark all the vertices as not visited 
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);//creating undirected graph
            adj[v].push_back(u);//enter vertices from 1 to N  you want to connect
            
        }
        int startVertex;//starting vertex from where you want to do bfs
        cout<<"\nEnter the starting vertex from where you want to do bfs = ";
        cin>>startVertex;
        cout<<"\n";
        bfs(startVertex, adj, vis, N);//printing the bfs
        cout<<endl;
}




