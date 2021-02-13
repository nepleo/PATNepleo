#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    float ave[n];
    for (int i = 0; i < n; i++) {
        int score[k];
        int ans = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &score[j]);
        }
        sort(score, score + k);
        for (int a = 1; a < k - 1; a++) {
            ans += score[a];
        }
        ave[i] = (float)ans / (float)(k - 2);
    }
    sort(ave, ave + n);
    for (int i = n - m; i < n - 1; i++)
        printf("%.3f ", ave[i]);
    printf("%.3f", ave[n - 1]);
    return 0;
}