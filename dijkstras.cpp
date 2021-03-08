#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <utility>
using namespace std;

const int N=100;

void dijkstras(int s, int* dist, int* prev, vector<pair<int,int> > adj[N]){

    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;

    int done[N];
    for (int i=0;i<N;i++){ done[i] = 0; }

    dist[s] = 0;
    pq.push(make_pair(0,s));

    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for (int i=0; i<adj[u].size();i++){
            pair<int,int> v = adj[u][i];
            if (!done[v.second]){
                if (dist[u]+v.first < dist[v.second]){
                    dist[v.second] = dist[u]+v.first;
                    prev[v.second] = u;
                    pq.push(make_pair(dist[v.second],v.second));
                }
            }
        }
        done[u] = 1;
    }
}

int main(){

    vector<pair<int,int> > adj[N];

    for (int i=0;i<N;i++){
        vector<pair<int,int> > v;
        v.push_back(make_pair(i+1,(i+1)%N));
        adj[i] = v;
    }

    for (int a=0;a<N;a++){
        cout << a << ": ";
        for (int i=0;i<adj[a].size();i++){
            cout << "(" << adj[a][i].first << "," << adj[a][i].second << ") ";
        } cout << endl;
    }

    int dist[N];
    int prev[N];
    for (int i=0;i<N;i++){
        dist[i] = INT_MAX;
        prev[i] = -1;
    }

    int s = 0;

    dijkstras(s,dist,prev,adj);

    for (int i=0;i<N;i++){
        cout << dist[i] << endl;
    }

}