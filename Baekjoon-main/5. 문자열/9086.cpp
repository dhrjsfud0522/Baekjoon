//https://www.acmicpc.net/problem/9086

#include <stdio.h>

int main(){
    int n, k;
    char l[1001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", &l);
        k = 0;
        for(int j = 0; l[j] != '\0'; j++) k++;
        printf("%c%c\n", l[0], l[k - 1]);
    }
    return 0;
}