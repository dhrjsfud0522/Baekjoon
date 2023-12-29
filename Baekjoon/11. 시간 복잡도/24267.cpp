//https://www.acmicpc.net/problem/24267

#include <stdio.h>

int main(){
    long long int n;
    long long int s = 0, c = 0;
    scanf("%lld", &n);
    for(long long int i = 1; i <= n - 2; i++){
        c += i;
        s += c;
    }
    printf("%lld\n%d", s, 3);
    return 0;
}