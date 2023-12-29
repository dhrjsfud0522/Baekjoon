//https://www.acmicpc.net/problem/24313

#include <stdio.h>

int main(){
    int a1, a0, c, n0;
    scanf("%d %d\n%d\n%d", &a1, &a0, &c, &n0);
    if((a1 - c) == 0){
        if(a0 <= 0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    else if((a1 - c) < 0){
        if((-1 * a0 / (a1 - c)) <= n0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    else{
        printf("0");
    }
    return 0;
}