#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string num2str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int sum = 0;
    for (int i = 0; i < str.size(); i++) {
        sum += (str[i] - '0');
    }
    string s = to_string(sum);
    for (int i = 0; i < s.size(); i++) {
        if (i != 0) cout << " ";
        cout << num2str[(s[i] - '0')];
    }
    return 0;
}


