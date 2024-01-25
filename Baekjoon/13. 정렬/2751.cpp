//https://www.acmicpc.net/problem/2751
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int l[n] = {};
    for(int i = 0; i < n; i++){
        scanf("%d", &l[i]);
    }
    sort(l, l + n); 
    for(int t = 0; t < n; t++){
        printf("%d\n", l[t]);
    }
    return 0;
}