//https://www.acmicpc.net/problem/10798

#include <stdio.h>
#include <string.h>

int main(){
    char l[5][16] = {};
    int max = 0;
    int n[5] = {};
    for(int h = 0; h < 5; h++){
        scanf("%s", l[h]);
        n[h] = strlen(l[h]);
        if(max < n[h]){
            max = n[h];
        }
    }
    for(int k = 0; k < max; k++){
        for(int i = 0; i < 5; i++){
            if(k < n[i]){
                printf("%c", l[i][k]);
            }
        }
    }
    return 0;
}