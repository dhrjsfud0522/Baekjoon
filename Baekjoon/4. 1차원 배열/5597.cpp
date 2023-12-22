//https://www.acmicpc.net/problem/5597

#include <stdio.h>

int main(){
    int l[30]; //백준에서는 = {0}; 해야함
    int n;
    for(int i = 0; i < 28; i++){
        scanf("%d", &n);
        l[n - 1] = 1;
    }
    for(int y = 0; y < 30; y++){
        if(l[y] != 1){
            printf("%d\n", y + 1);
        }
    }
    return 0;
}