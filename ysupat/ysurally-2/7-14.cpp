#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
using namespace std;
const int MAXV = 200;
const int INF = 1000000000;

struct node {
    string name;
    int num;
} node[MAXV];
int n, k, s, G[MAXV][MAXV];
int d[MAXV], pre[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s) {
    fill(d, d + MAXV, INF);
    for (int i = 0; i < n; i++) pre[i] = i;
    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int u = -1, MIN = INF;
        for (int j = 0; j < n; j++) {
            if (vis[j] == false && d[j] < MIN) {
                u = j;
                MIN = d[j];
            }
        }
        if (u == -1) return;
        vis[u] = true;
        for (int v = 0; v < n; v++) {
            if (vis[u] == false && G[u][v] != INF && d[u] + G[u][v] < d[v]) {
                d[v] = d[u] + G[u][v];
            }
        }
    }
}

int main() {
    string enemy;
    map<string, int> map;
    cin >> n >> k >> node[0].name >> enemy;
    map[node[0].name] = 0;
    for (int i = 1; i < n; i++) {
        cin >> node[i].name >> node[i].num;
        map[node[i].name] = i;
    }
    fill(G[0], G[0] + MAXV * MAXV, INF);
    for (int i = 0; i < k; i++) {
        string a, b;
        int num;
        cin >> a >> b >> num;
        G[map[a]][map[b]] = num;
        G[map[b]][map[a]] = num;
    }
    Dijkstra(0);
    for (int i = 0; i < n; i++)
        cout << d[i]<<endl;
    cout << d[map[enemy]];
}
