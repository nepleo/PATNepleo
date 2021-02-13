#include<cstdio>

int main() {
    int p, dr;
    scanf("%d %d", &p, &dr);
    float sale = (float)p * (float)(dr) / 10;
    printf("%.2f", sale);
    return 0;
}