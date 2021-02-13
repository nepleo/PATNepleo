#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int l , n, num;
    cin >> l >> n;
    vector<int> a;
    num = pow(26, l) - n;
    while (num) {
        a.push_back(num % 26);
        num /= 26;
    }
    for (int i = 0; i < l - a.size(); i++)
        cout << 'a';
        for (int i = a.size() - 1; i >= 0; i--) {
            cout << (char)('a' + a[i]);
        }
        return 0;
}
