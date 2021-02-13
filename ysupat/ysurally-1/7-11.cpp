#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct person {
    int ownNum;
    int faNum, moNum;
    int kidNum[5];
    int k;
    int homeNum, sumArea;
};

int n = 0;

int main() {
    scanf("%d", &n);
    person pers[n];
    for (int i = 0; i < n; i++) {
        cin >> pers[i].ownNum >> pers[i].faNum >> pers[i].moNum >> pers[i].k;
        for (int j = 0; j < pers[i].k; j++) {
            cin >> pers[i].kidNum[j];
        }
        cin >> pers[i].homeNum >> pers[i].sumArea;
    }
    vector<person> family[n];
    int cnt = 0;
    family[cnt].push_back(pers[0]);

    for (int i = 1; i < n; i++) {
        int findFlag = 0;
        int recordM = 0;
        for (int m = 0; m <= cnt; m++) {
            for (int j = 0; j < family[m].size(); j++) {
                int kidflag = 0;
                int comKid = 0;
                for (int x = 0; x < family[m][j].k; x++) {
                    if (pers[i].ownNum == family[m][j].kidNum[x]) {
                        kidflag = 1;
                        break;
                    }
                }
                for (int x = 0; x < family[m][j].k; x++) {
                    for (int y = 0; y < pers[i].k; y++) {
                        if (pers[i].kidNum[y] == family[m][j].kidNum[x]) {
                            comKid = 1;
                            break;
                        }
                    }
                }
                if (pers[i].ownNum == family[m][j].moNum || pers[i].ownNum == family[m][j].faNum || kidflag || comKid) {
                    findFlag = 1;
                    recordM = m;
                    break;
                }
            }
            if (findFlag == 1)
                break;
        }
        if (findFlag == 1) {
            family[recordM].push_back(pers[i]);
        } else {
            family[++cnt].push_back(pers[i]);
        }
    }
    cout << cnt;

}

/*错误答案*/