//https://www.acmicpc.net/problem/2743

#include <stdio.h>

int main(){
    char s[101];
    int k = 0;
    scanf("%s", &s);
    for(int i = 0; s[i] != '\0'; i++) k++;
    printf("%d", k);
    return 0;
}