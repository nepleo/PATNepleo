#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

bool cmp (int x, int y) {
    return x < y;
}
int main() {
    int n = 0;
    cin >> n;
    int arr[n];
    int sum = 0, half = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n, cmp);
    for(int i = 0; i < n / 2; i++) {
        half += arr[i];
    }
    printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d", (n + 1) / 2, n / 2, sum - 2 * half);
    return 0;
}