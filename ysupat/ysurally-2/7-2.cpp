#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "I Love GPLT";
    for (int i = 0; i < a.length() - 1; i++) {
        cout << a[i] << endl;
    }
    cout << a[a.length() - 1];
}