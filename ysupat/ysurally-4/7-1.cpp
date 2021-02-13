#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i = 0;
    while (1) {
        int in;
        scanf("%d",&in);
        i++;
        if (in == 250) {
            printf("%d", i);
            break;
        }
    }
}
