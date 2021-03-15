#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int arr[105];
int hashmap[10000];

int main()
{
    memset(hashmap, 0, sizeof(hashmap));
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int tmp = arr[i];
        while (tmp != 1) {
            if (tmp % 2 == 0)
                tmp = tmp / 2;
             else
                tmp = (3 * tmp + 1) / 2;
            hashmap[tmp] = 1;
        }
    }
    sort(arr, arr + n, cmp);
    vector<int> res;
    for (int i = 0; i < n; i++) {
        if (hashmap[arr[i]] == 0)
            res.push_back(arr[i]);
    }
    for (int i = 0; i < res.size() - 1; i++) {
        cout << res[i] << " ";
    }
    cout << res[res.size() - 1];
    return 0;
}