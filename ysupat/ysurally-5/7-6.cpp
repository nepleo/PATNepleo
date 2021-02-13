#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    char rep;
    int n = 0;
    int flag = 0;
    scanf("%c %d", &rep, &n);
    getchar();
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[n - 1 - i][n - 1 - j])
                flag = 1;
        }
    }
    if (flag == 0)
        cout << "bu yong dao le" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[n - 1 - i][n - 1 - j] == '@')
                cout << rep;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}