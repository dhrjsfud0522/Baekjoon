//https://www.acmicpc.net/problem/24266

#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n%d", (long long int)(n * n * n), 3);
    return 0;
}