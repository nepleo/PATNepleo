#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    string in;
    int cnt = 0;
    do {
        cin >> in;
        v.push_back(in);
        cnt++;
    } while (in != ".");
    if (cnt <= 2) {
        cout << "Momo... No one is for you ..."  << endl;
    } else if (cnt > 2 && cnt <= 14) {
        cout << v[1] << " is the only one for you..." << endl;
    } else {
        cout << v[1] << " and " << v[13] << " are inviting you to dinner..." << endl;
    }
    return 0;
}