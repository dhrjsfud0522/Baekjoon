#include <stdio.h>

int main(){
    int l[10][10];
    int q = 1;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d ", &l[i][j]);
        }
    }
    int x = 1, y = 1;
    if(l[y][x] == 2){
        q = 0;
    }
    l[y][x] = 9;
    while(q){
        if(l[y][x + 1] != 1){
            x += 1;
            if(l[y][x] == 2){
                l[y][x] = 9;
                break;
            }
            l[y][x] = 9;
        }
        else{
            if(l[y + 1][x] != 1){
                y += 1;
                if(l[y][x] == 2){
                    l[y][x] = 9;
                    break;
                }
                l[y][x] = 9;
            }
            else{
                if(l[y + 1][x] == 2){
                    l[y + 1][x] = 9;
                }
                break;
            }
        }
    }

    for(int h = 0; h <= 9; h++){
        for(int g = 0; g <= 9; g++){
            printf("%d ", l[h][g]);
        }
        printf("\n");
    }
}