#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= 2;
    }
    cout << "2^" << n << " = " << sum;
    return 0;
}
