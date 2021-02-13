#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string name;
    int breath, heartbeat;
    for (int i = 0; i < n; i++) {
        cin >> name >> breath >> heartbeat;
        if ((breath < 15 || breath > 20) || (heartbeat < 50 || heartbeat > 70)) {
            cout << name << endl;
        }
    }
    return 0;
}