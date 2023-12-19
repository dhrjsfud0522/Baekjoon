//https://www.acmicpc.net/problem/2566

#include <stdio.h>

int main(){
    int l[9][9];
    int max = 0, n = 0, m = 0;
    for(int h = 0; h < 9; h++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &l[h][j]);
        }   
    }
    for(int k = 0; k < 9; k++){
        for(int g = 0; g < 9; g++){
            if(l[k][g] > max){
                max = l[k][g];
                n = k;
                m = g;
            }
        }   
    }
    printf("%d\n%d %d", max, n + 1, m + 1);
    return 0;
}