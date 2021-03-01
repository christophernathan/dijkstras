#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int dijkstras(int s, int* dist, vector<int> adj[]){

    priority_queue<int, int> q;
    
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

}