//https://www.acmicpc.net/problem/2753

#include <stdio.h>

int main(){
    int n, i = 0;
    scanf("%d", &n);
    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
        i = 1;
    }
    printf("%d", i);

    return 0;
}