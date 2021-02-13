#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    set<char> s;
    string str;
    cin >> str;
    for (int i = 0; i < 11; i++) {
        s.insert(str[i]);
    }
    char arr[11] = {0};
    int cnt = 0;
    for (auto it = s.begin(); it != s.end(); it++) {
        arr[cnt] = *it;
        cnt++;
    }
    sort(arr, arr + cnt, cmp);
    vector<int> v;
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < cnt; j++) {
            if (str[i] == arr[j]) {
                v.push_back(j);
            }
        }
    }
    cout << "int[] arr = new int[]{";
    for (int i = 0; i < cnt - 1; i++)
        cout << arr[i] << ",";
    cout << arr[cnt - 1] << "};" << endl;
    cout << "int[] index = new int[]{";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ",";
    }
    cout << v[v.size() - 1] << "};";
    return 0;
}