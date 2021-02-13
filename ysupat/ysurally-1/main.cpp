#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <string.h>
using namespace std;

bool isNumber(string s) {
    int len = s.length() - 2;
    char c[20];
    strcpy(c,s.c_str());
    bool sign = false, decimal = false, hasE = false;
    for (int i = 1; i < len; i++) {
        if (c[i] == '+' || c[i] == '-') {
            if (i > 1 && (c[i - 1] != 'e' || c[i - 1] != 'E'))
                return false;
        }
        else if (char(c[i]) == 'e' || char(c[i]) == 'E') {
            if ((i == len - 1) || (i == 1))
                return false;
            if (hasE)
                return false;
            hasE = true;
        }
        else if (c[i] == '.') {
            if (hasE || decimal || (i == 1))
                return false;
            decimal = true;
        }
            //else if (c[i] < '0' || c[i] > '9')
            //    return false;
        else if ((c[i] == ' ' && i < len - 1) || len == 2)
            return false;
    }
    return true;
}
int main() {
    int x, n;
    string str;
    cin >> str;
    bool result = isNumber(str);
    if (result)
        cout << "true";
    else
        cout << "false";
}
