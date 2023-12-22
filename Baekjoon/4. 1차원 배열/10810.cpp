//https://www.acmicpc.net/problem/10810

#include <stdio.h>

int main(){
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int l[n]; //백준 온라인 컴파일러는 = {0}; 해야 하더라
    for(int u = 1; u <= m; u++){
        scanf("%d %d %d", &i, &j, &k);
        for(int p = i - 1; p < j; p++){
            l[p] = k;
        }
    }
    for(int t = 0; t < n; t++){
        printf("%d ", l[t]);
    }
    return 0;
}