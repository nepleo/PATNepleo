#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> rule;
    rule.push_back("ChuiZi");
    rule.push_back("Bu");
    rule.push_back("JianDao");
    int k;
    cin >> k;
    string in;
    cin >> in;
    int cnt = 0;
    while (in != "End") {
        cnt++;
       if (cnt % (k + 1) == 0) {
           cnt = 0;
           cout << in << endl;
       } else {
           if (in == "ChuiZi") {
               cout << rule[1] << endl;
           } else if (in == "Bu") {
               cout << rule[2] << endl;
           } else if (in == "JianDao") {
               cout << rule[0] << endl;
           }
       }

       cin >> in;
    }
}