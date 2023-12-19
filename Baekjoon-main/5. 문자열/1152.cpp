//https://www.acmicpc.net/problem/1152

#include <stdio.h>
#include <string.h>

int main(){
    int i = 0, t = 0;
    char n, k;
    while(n != '\n'){
        scanf("%c", &n);
        if(n == ' '){
            if(t != 0){
                i++;
            }
        }
        if(n != '\n'){
            k = n;
        }
        t++;
    }
    if(k == ' '){
        i--;
    }
    printf("%d", i + 1);
    return 0;
}