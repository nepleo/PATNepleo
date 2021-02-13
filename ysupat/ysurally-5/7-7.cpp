#include <iostream>
using namespace std;

int main() {
    int pa, pb;
    int arr[2] = {0, 0};
    cin >> pa >> pb;
    getchar();
    for (int i = 0; i < 3; i++) {
        int in;
        cin >> in;
        arr[in]++;
    }
    if (pa > pb && (arr[0] != 0)) {
        cout << "The winner is a: " << pa << " + " << arr[0];
    } else if ((pa < pb) && (arr[0] == 3)) {
        cout << "The winner is a: " << pa << " + " << arr[0];
    } else {
        cout << "The winner is b: " << pb << " + " << arr[1];
    }
    return 0;
}