//https://www.acmicpc.net/problem/2720

#include <stdio.h>

int main(){
    int t, c;
    scanf("%d", &t);
    for(int h = 0; h < t; h++){
        scanf("%d", &c);
        printf("%d ", c / 25);
        c %= 25;
        printf("%d ", c / 10);
        c %= 10;
        printf("%d ", c / 5);
        c %= 5;
        printf("%d\n", c / 1);
    }
    return 0;
}