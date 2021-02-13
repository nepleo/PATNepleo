#include <cstdio>
#include <algorithm>
using namespace std;
#define MAXV  500
bool visit[MAXV];
int g[MAXV][MAXV], n, m, k;

void dfs(int node) {
    visit[node] = true;
    for (int i = 0; i < n; i++) {
        if (visit[i] == false && g[node][i] == 1) {
            dfs(i);
        }
    }
}

int countcnt() {
    int cnt = 0;
    fill(visit, visit + MAXV, false);
    for (int i = 0; i < n; i++) {
        if (visit[i] == false) {
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}
int main() {
    scanf("%d%d", &n,&m);
    int a, b, city;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        g[a][b] = g[b][a] = 1;
    }
    int cnt = countcnt();
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &city);
        for (int j = 0; j < n; j++) {
            if (g[city][j] == 1) {
                g[city][j] = 0;
                g[j][city] = 0;
            }
        }
        int tempcnt = countcnt();
        if (tempcnt > cnt + 1)
            printf("Red Alert: City %d is lost!\n", city);
        else
            printf("City %d is lost.\n", city);
        cnt = tempcnt;
        if (i == n - 1)
            printf("Game Over.\n");
    }
    return 0;
}