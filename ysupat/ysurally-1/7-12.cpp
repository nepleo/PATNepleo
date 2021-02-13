#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int maxvalue = 0, temp;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        temp = 1;
        for (int j = 1; j < len; j++) {
            if (i - j < 0 || i + j >= len || str[i - j] != str[i + j])
                break;
            temp += 2;
        }
        maxvalue = temp > maxvalue ? temp : maxvalue;
        temp = 0;
        for (int j = 1; j < len; j++) {
            if (i - j + 1 < 0 || i + j >= len || str[i - j + 1] != str[i + j])
                break;
            temp += 2;
        }
        maxvalue = temp > maxvalue ? temp : maxvalue;
    }
    cout << maxvalue;
    return 0;
}
