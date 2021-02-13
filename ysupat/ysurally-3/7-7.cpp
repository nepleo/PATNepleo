#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    string s;
    scanf("%d", &n);
    getchar();
    getline(cin, s);
    int cnt = 0;
    int m = ceil((float)s.length() / (float) n);
    char arr[n][m];
    for (int i = m - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (cnt < s.length()) {
                arr[j][i] = s[cnt];
                cnt++;
            } else {
                arr[j][i] = ' ';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
 * 考点：字符串的输入与输出
 * */