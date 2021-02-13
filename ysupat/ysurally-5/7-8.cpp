#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct person {
    string name;
    int num;
    int minus = 0;
};

bool cmp (person a, person b) {
    return a.minus < b.minus;
}
int main() {
    int n = 0;
    int sum = 0;
    cin >> n;
    person p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].num;
        sum += p[i].num;
    }
    int ave = sum / n / 2;
    for (int i = 0; i < n; i++) {
        p[i].minus = abs(p[i].num - ave);
    }
    sort(p, p + n, cmp);
    cout << ave << " " << p[0].name;
    return  0;
}
