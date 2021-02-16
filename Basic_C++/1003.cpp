#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n = 0, p_pos = 0, t_pos = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
         map<char, int> m;
         for (int j = 0; j < s.size(); j++) {
             m[s[j]]++;
             if (s[j] == 'P') p_pos = j;
             if (s[j] == 'T') t_pos = j;
         }
         if (m['P'] == 1 && m['T'] == 1 && m.size() ==3 && t_pos-p_pos != 1 && p_pos * (t_pos-p_pos-1) == s.length()-t_pos-1)
             cout << "YES" << endl;
         else
             cout << "NO" << endl;
    }
}