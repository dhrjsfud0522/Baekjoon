//https://www.acmicpc.net/problem/2292

#include <stdio.h>

int main(){
    int n, m = 1, i = 1;
    scanf("%d", &n);
    for(int h = 2; n > m; h += 2){
        m += h * 3;
        i += 1;
    }
    printf("%d", i);
    return 0;
}