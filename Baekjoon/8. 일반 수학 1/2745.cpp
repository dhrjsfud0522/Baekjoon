//https://www.acmicpc.net/problem/2745

#include <stdio.h>
#include <string.h>

int main(){
    char j[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for(int h = 65; h <= 91; h++){
        j[h - 55] = char(h);
    }
    int n, k, x, m = 0, f, s, g;
    char l[40] = {};
    scanf("%s %d", l, &n);
    k = strlen(l) - 1;
    g = strlen(l);
    for(int b = 0; b < g; b++){
        x = 1;
        for(int q = 0; q < k; q++){
            x *= n;
        }
        for(s = 0; s < 36; s++){
            if(j[s] == l[b]){
                break;
            }
        }
        m += s * x;
        k--;
    }
    printf("%d", m);
    return 0;
}