#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    int cnt = 0;
    getline(cin, str1);
    getline(cin, str2);
    for (int i = 0; i < str1.length(); i++) {
        for(int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                break;
            }
            cnt++;
        }
        if (cnt == str2.length())
            cout << str1[i];
        cnt = 0;
    }
    return 0;

}