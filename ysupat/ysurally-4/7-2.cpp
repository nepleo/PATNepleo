#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int mm, dd, yyyy;
    scanf("%d-%d-%d", &mm, &dd, &yyyy);
    printf("%d-%02d-%02d", yyyy, mm, dd);
    return 0;
}