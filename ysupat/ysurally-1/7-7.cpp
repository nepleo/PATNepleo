#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt;
    char value;
    cin >> n >> value;
    if (n % 2 == 0)
        cnt = n / 2;
    else cnt = n / 2 + 1;
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < n; j++) {
            cout << value;
        }
        cout << endl;
    }
    return 0;
}
