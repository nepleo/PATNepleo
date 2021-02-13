#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    int n;
    char c;
    string str;
    cin >> n >> c;
    getchar();
    getline(cin, str);
    int len = str.length();
    if (len >= n) {
        cout << str.substr(str.size() - n);
    } else {
        for (int i = 0; i < n - str.length(); i++)
            cout << c;
        cout << str << endl;
    }
    return 0;
}
