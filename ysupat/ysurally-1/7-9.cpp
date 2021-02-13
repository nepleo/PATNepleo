#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    set<int> s[n];
    for (int i = 0; i < n; i++) {
        int index = 0;
        cin >> index;
        int val;
        for (int j = 0; j < index; j++) {
            cin >> val;
            s[i].insert(val);
        }
    }
    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        vector<int> interSet;
        vector<int> unionSet;
        set_union(s[x - 1].begin(), s[x - 1].end(), s[y - 1].begin(), s[y - 1].end(),inserter(unionSet,unionSet.begin())); //并集
        set_intersection(s[x - 1].begin(), s[x - 1].end(), s[y - 1].begin(), s[y - 1].end(), inserter(interSet, interSet.begin())); //交集
        float rate = (float) interSet.size() / (float)unionSet.size();
        printf("%.2f%\n", rate * 100);
    }
    return 0;
}