//https://www.acmicpc.net/problem/24265

#include <stdio.h>

int main(){
    long long int n, i = 0;
    scanf("%lld", &n);
    for(int j = 1; j < n; j++){
        i += j;
    }
    printf("%lld\n%d", i, 2);
    return 0;
}