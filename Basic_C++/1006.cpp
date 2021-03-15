#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int unit = n % 10;
    int decade = (n / 10) % 10;
    int hundred = ((n / 10) / 10) % 10;
    string res;
    for (int i = 0; i < hundred; i++) {
        res += 'B';
    }
    for (int i = 0; i < decade; i++) {
        res += 'S';
    }
    for (int i = 1; i <= unit; i++) {
        res += to_string(i);
    }
    cout << res;
}

