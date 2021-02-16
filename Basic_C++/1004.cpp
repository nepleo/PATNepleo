#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student {
    string name;
    string id_stu;
    int score;
};

bool cmp(student s1, student s2) {
    return s1.score > s2.score;
}
int main()
{
    int n = 0;
    cin >> n;
    student stu[n];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].id_stu >> stu[i].score;
    }
    sort(stu, stu + n, cmp);
    cout << stu[0].name << " " << stu[0].id_stu << endl;
    cout << stu[n - 1].name << " " << stu[n - 1].id_stu << endl;
    return 0;
}

