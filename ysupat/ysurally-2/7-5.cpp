#include <cstdio>

int main() {
    int h;
    float w = 0;
    scanf("%d", &h);
    w = (float)(h - 100) * 0.9 * 2;
    printf("%.1f", w);
    return 0;
}