#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

typedef pair<int,int> Pair;

int dijkstras(int s, int* dist, int adj[10][10]){

    priority_queue<Pair, vector<Pair>, greater<Pair> > pq;

    pq.push(make_pair(0,s));

    while (pq.size()!=0){
        int u = pq.top().second;
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
        adj[i][(i+1)%10] = i;
    }

    for (int a=0;a<10;a++){
        for (int b=0;b<10;b++){
            cout << adj[a][b] << " ";
        } cout << endl;
    }

    int dist[128];
    for (int i=0;i<128;i++){
        dist[i] = INT_MAX;
    }
    int s = 0; dist[0] = 0;
    int t = 9;

    dijkstras(s,dist,adj);

}