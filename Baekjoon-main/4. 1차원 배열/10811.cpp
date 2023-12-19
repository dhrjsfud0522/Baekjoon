//https://www.acmicpc.net/problem/10811

#include <stdio.h>

int main(){
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    int l[n], k[n];
    for(int i = 1; i <= n; i++){
        l[i - 1] = i;
    }
    for(int p = 0; p < m; p++){
        scanf("%d %d", &a, &b);
        for(int q = 0; q <= b - a; q++){
            k[q] = l[a + q - 1];
        }
        for(int e = 0; e <= b - a; e++){
            l[a + e - 1] = k[b - a - e];
        }
    }

    for(int h = 0; h < n; h++){
        printf("%d ", l[h]);
    }
    return 0;
}