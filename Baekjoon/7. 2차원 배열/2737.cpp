//https://www.acmicpc.net/problem/2738

#include <stdio.h>

int main(){
    int a, b, k;
    scanf("%d %d", &a, &b);
    int l[a][b];
    for(int i = 0; i < a; i++){
        for(int n = 0; n < b; n++){
            scanf("%d", &l[i][n]);
        }
    }
    for(int i = 0; i < a; i++){
        for(int n = 0; n < b; n++){
            scanf("%d", &k);
            l[i][n] += k;
        }
    }
    for(int i = 0; i < a; i++){
        for(int n = 0; n < b; n++){
            printf("%d ", l[i][n]);
        }
        printf("\n");
    }
    return 0;
}