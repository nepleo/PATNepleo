#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("%d/0=Error",a);
        return 0;
    }
    float c = (float) a / (float)b;
    if (b < 0) {
        printf("%d/(%d)=%.2f",a, b, c);
    } else {
        printf("%d/%d=%.2f",a, b, c);
    }
    return 0;
}