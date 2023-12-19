//https://www.acmicpc.net/problem/2903

#include <stdio.h>

int main(){
    int n, m = 2;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        m += m - 1;
    }
    printf("%d", m * m);
    return 0;
}