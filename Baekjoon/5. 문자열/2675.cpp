//https://www.acmicpc.net/problem/2675

#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    char l[21] = {};
    scanf("%d", &n);
    for(int h = 0; h < n; h++){
        scanf("%d %s", &i, l);
        for(int g = 0; g < strlen(l); g++){
            for(int o = 0; o < i; o++){
                printf("%c", l[g]);
            }
        }
        printf("\n");
        
    }
    return 0;
}