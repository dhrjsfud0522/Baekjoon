//https://www.acmicpc.net/problem/1018

#include <stdio.h>

int main(){
    int n, m, i, r, c = 64;
    char z, x;
    scanf("%d %d", &n, &m);
    char l[n][m] = {};
    for(int q = 0; q < n; q++){
        scanf("%s", &l[q]);
    }
    for(int g = 0; g < (n - 7); g++){
        for(int h = 0; h < (m - 7); h++){
            i = 0;
            r = 0;
            z = 'B';
            for(int j = g; j < (g + 8); j++){
                for(int k = h; k < (h + 8); k++){
                    if(z == 'W'){
                        z = 'B';
                    }
                    else if(z == 'B'){
                        z = 'W';
                    }
                    if(l[j][k] != z){
                        i++;
                    }
                    if(l[j][k] == z){
                        r++;
                    }
                }
                if(z == 'W'){
                    z = 'B';
                }
                else if(z == 'B'){
                    z = 'W';
                }
            }
            if(c > i){
                c = i;
            }
            if(c > r){
                c = r;
            }
        }
    }
    printf("%d", c);
}