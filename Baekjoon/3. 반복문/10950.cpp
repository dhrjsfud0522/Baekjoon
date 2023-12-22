//https://www.acmicpc.net/problem/10950

#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}