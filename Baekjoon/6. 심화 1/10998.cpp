//https://www.acmicpc.net/problem/10998

#include <stdio.h>
#include <string.h>

int main(){
    char i[101] = {}, p[101] = {};
    int t = 1;
    scanf("%s", i);
    for(int h = 0; h < strlen(i); h++){
        p[strlen(i) - h - 1] = i[h];
    }
    for(int q = 0; q < strlen(i); q++){
        if(i[q] != p[q]){
            t = 0;
            break;
        }
    }
    printf("%d", t);
    return 0;
}