//https://www.acmicpc.net/problem/2480

#include <stdio.h>

int main(){
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        n = 10000 + (a * 1000);
    }
    else if(a == b || c == a){
        n = 1000 + (a * 100);
    }
    else if(b == c){
        n = 1000 + (b * 100);
    }
    else{
        n = ((a > b ? a : b) > c ? (a > b ? a : b) : c) * 100;
    }
    printf("%d", n);
    
    return 0;
}