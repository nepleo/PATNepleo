#include <iostream>
#include <cstdio>
using namespace std;

struct person {
    char sex;
    float height;
    float halfHeight;
};

int main() {
    int n = 0;
    cin >> n;
    person per[n];
    for (int i = 0; i < n; i++) {
        cin >> per[i].sex >> per[i].height;
        if (per[i].sex == 'M') {
            per[i].halfHeight = per[i].height / 1.09;
            printf("%.2f\n", per[i].halfHeight);
        } else {
            per[i].halfHeight = per[i].height * 1.09;
            printf("%.2f\n", per[i].halfHeight);
        }
    }
    return 0;
}