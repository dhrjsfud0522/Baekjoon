//https://www.acmicpc.net/problem/2588

#include <stdio.h>

int main(){
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("%d\n", n * c);
    printf("%d\n", n * b);
    printf("%d\n", n * a);
    printf("%d\n", n * ((a * 100) + (b * 10) + c));
}