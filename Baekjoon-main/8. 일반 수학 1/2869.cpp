//https://www.acmicpc.net/problem/2869

#include <stdio.h>

int main(){
    int a, b, v, n;
    scanf("%d %d %d", &a, &b, &v);
    if(a >= v){
        printf("1");
        return 0;
    }
    if(a == v && b == 0){
        printf("1");
        return 0;
    }
    if((v - a) % (a - b) == 0){
        n = 1;
    }
    else{
        v -= (v - a) % (a - b);
        n = 2;
    }
    printf("%d", (v - a) / (a - b) + n);
    return 0;
}