#include <iostream>
using namespace std;

int cal(int x) {
    if (x == 1) {
        return 1;
    }
    int sum = x * cal(x - 1);
    return sum;
}

int main() {
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += cal(i);
    }
    cout << sum;
}

