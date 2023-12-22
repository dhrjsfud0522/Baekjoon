//https://www.acmicpc.net/problem/2908

#include <stdio.h>

int main(){
    int a[3] = {}, b[3] = {};
    scanf("%1d%1d%1d", &a[2], &a[1], &a[0]);
    scanf("%1d%1d%1d", &b[2], &b[1], &b[0]);
    if(a[0] > b[0]){
        for(int i = 0; i <= 2; i++){
            printf("%d", a[i]);
        }
    }
    else if(a[0] < b[0]){
        for(int i = 0; i <= 2; i++){
            printf("%d", b[i]);
        }
    }
    else{
        if(a[1] > b[1]){
            for(int i = 0; i <= 2; i++){
                printf("%d", a[i]);
            }
        }
        else if(a[1] < b[1]){
            for(int i = 0; i <= 2; i++){
                printf("%d", b[i]);
            }
        }
        else{
            if(a[2] > b[2]){
                for(int i = 0; i <= 2; i++){
                    printf("%d", a[i]);
                }
            }
            else{
                for(int i = 0; i <= 2; i++){
                    printf("%d", b[i]);
                }
            }
        }
    }
    return 0;
}