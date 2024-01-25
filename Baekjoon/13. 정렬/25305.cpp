//https://www.acmicpc.net/problem/20305
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, k, s = 0;
    scanf("%d %d", &n, &k);
    int l[n] = {};
    for(int i = 0; i < n; i++){
        scanf("%d", &l[i]);
        s += l[i];
    }
    sort(l, l + n);
    printf("%d", l[n - k]);
    return 0;
}