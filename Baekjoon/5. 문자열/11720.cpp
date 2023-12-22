//https://www.acmicpc.net/problem/11720

#include <stdio.h>

int main(){
    int n, j, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%1d", &j);
        sum += j;
    }
    printf("%d", sum);
    return 0;
}