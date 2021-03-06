#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

typedef pair<int,int> Pair;

void dijkstras(int s, int* dist, int* prev, int adj[10][10]){

    priority_queue<Pair, vector<Pair>, greater<Pair> > pq;

    int done[10];
    for (int i=0;i<10;i++){ done[i] = 0; }

    dist[s] = 0;
    pq.push(make_pair(0,s));

    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for (int v=0;v<10;v++){
            if (!done[v] && adj[u][v]!=-1){
                if (dist[u]+adj[u][v] < dist[v]){
                    dist[v] = dist[u]+adj[u][v];
                    prev[v] = u;
                    pq.push(make_pair(dist[v],v));
                }
            }
        }
        done[u] = 1;
    }
    
}

int main(){
    int adj[10][10];
    for (int a=0;a<10;a++){
        for (int b=0;b<10;b++){
            adj[a][b]=-1; adj[b][a]=-1;
        }
    }

    for (int i=0;i<10;i++){
        adj[i][(i+1)%10] = i+1;
    }

    for (int a=0;a<10;a++){
        for (int b=0;b<10;b++){
            cout << adj[a][b] << " ";
        } cout << endl;
    }

    int dist[128];
    int prev[128];
    for (int i=0;i<128;i++){
        dist[i] = INT_MAX;
        prev[i] = -1;
    }

    int s = 0;

    dijkstras(s,dist,prev,adj);

    for (int i=0;i<10;i++){
        cout << dist[i] << endl;
    }

}