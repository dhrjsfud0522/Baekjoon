//https://www.acmicpc.net/problem/10813

#include <stdio.h>

int main(){
    int n, m, i, j, q;
    scanf("%d %d", &n, &m);
    int l[n];
    for(int i = 1; i <= n; i++){
        l[i - 1] = i;
    }
    for(int h = 0; h < m; h++){
        scanf("%d %d", &i, &j);
        q = l[i - 1];
        l[i - 1] = l[j - 1];
        l[j - 1] = q;
    }
    
    for(int t = 0; t < n; t++){
        printf("%d ", l[t]);
    }
    return 0;
}