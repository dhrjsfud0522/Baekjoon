//https://www.acmicpc.net/problem/2839

#include <stdio.h>

int main(){
    int n, i = 0, k = 2000;
    scanf("%d", &n);
    while(n >= 5){
        if(n % 3 == 0){
            if((i + (n / 3)) < k){
                k = i + n / 3;
            }
        }
        n -= 5;
        i += 1;
    }
    if(n % 3 == 0){
        i += n / 3;
    }
    else if(n != 0){
        i = 2000;
        if(k == 2000){
            printf("-1");
            return 0;
        }
    }
    if(k < i){
        printf("%d", k);
    }
    else{
        printf("%d", i);
    }
    return 0;
}