//https://www.acmicpc.net/problem/2587
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int s = 0;
    int l[5] = {};
    for(int i = 0; i < 5; i++){
        scanf("%d", &l[i]);
        s += l[i];
    }
    sort(l, l + 5);
    printf("%d\n%d", s / 5, l[2]);
    return 0;
}