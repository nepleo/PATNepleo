#include <iostream>
#include <algorithm>
using namespace std;

struct person {
    string mail;
    int score;
};
bool cmp (person a, person b) {
    if (a.score != b.score) return a.score > b.score;
    return a.mail < b.mail;
}

int main() {
    int n, g, k;
    cin >> n >> g >> k;
    int sum = 0;
    person p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].mail >> p[i].score;
        if (p[i].score >= 60) sum += 20;
        if (p[i].score >= g) sum += 30;
    }
    sort(p, p + n, cmp);
    int rank[10000] = {0};
    rank[0] = 1;
    for (int i = 1; i < n; i++) {
        if (p[i].score == p[i - 1].score)
            rank[i] = rank[i - 1];
        else
            rank[i] = i + 1;
    }
    cout << sum << endl;
    for (int i = 0; i < n && rank[i] <= k; i++) {
        printf("%d %s %d\n", rank[i], p[i].mail.c_str(),p[i].score );
    }
    return 0;
}