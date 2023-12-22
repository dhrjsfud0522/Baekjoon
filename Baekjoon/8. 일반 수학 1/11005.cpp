//https://www.acmicpc.net/problem/11005

#include <stdio.h>
#include <string.h>

int main(){
    char j[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for(int h = 65; h <= 91; h++){
        j[h - 55] = char(h);
    }
    int n, i, p, k = 0, r;
    char l[40] = {};
    scanf("%d %d", &n, &i);
    while(n >= i){
        p = n % i;
        n -= p;
        n /= i;
        l[k] = j[p];
        k++;
    }
    p = n % i;
    l[k] = j[p];
    r = strlen(l) - 1;
    for(int q = r; q >= 0; q--){
        printf("%c", l[q]);
    }
    return 0;
}