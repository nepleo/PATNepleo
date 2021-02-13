#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int h , rw;
        cin >> h >> rw;
        float sw = (float)(h - 100) * 0.9 * 2;
        if (abs(rw - sw) < sw * 0.1) {
            cout << "You are wan mei!" << endl;
        } else {
            if (rw > sw)
                cout << "You are tai pang le!" << endl;
            else
                cout << "You are tai shou le!" << endl;
        }
    }
    return 0;
}
