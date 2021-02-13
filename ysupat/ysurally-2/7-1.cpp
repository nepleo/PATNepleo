#include<iostream>
#include <string>
#include <cctype>
using namespace std;

bool islegal(string s) {
    if(s.length() == 0)
        return false;
    for(int i = 0; i < s.length(); i++) {
        if(!isdigit(s[i])) return false;
    }
    int temp = stoi(s);
    if(temp < 1 || temp > 1000) return false;
    return true;
}

int main() {
    string inStr;
    string strA, strB;
    getline(cin,inStr);
    for (int i = 0; i < inStr.length(); i++) {
        if (inStr[i] == ' ') {
            strA = inStr.substr(0, i);
            strB = inStr.substr(i + 1);
            break;
        }
    }
    if (!islegal(strA)) strA = "?";
    if (!islegal(strB)) strB = "?";
    string strC = "?";
    if (strA != "?" && strB != "?") {
        int C = stoi(strA) + stoi(strB);
        strC = to_string(C);
    }
    cout << strA << " + " << strB << " = " << strC;
    return 0;
}