#include <cstdio>

int main() {
    int n = 0;
    int arr[1001] = {0};
    int maxIndex = 0, maxValue = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        int k = 0;
        scanf("%d",&k);
        for (int j = 0; j < k; j++) {
            int f = 0;
            scanf("%d",&f);
            arr[f]++;
        }
    }
    for (int i = 0; i < 1001; i++) {
        if (arr[i] >= maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    printf("%d %d",maxIndex, maxValue);
    return 0;
}