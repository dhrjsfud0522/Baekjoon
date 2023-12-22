//https://www.acmicpc.net/problem/2444

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n * 2 - 1; i += 2){
        for(int p = 1; p < n - i / 2; p++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n * 2 - 3; i >= 1; i -= 2){
        for(int p = 1; p < n - i / 2; p++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}