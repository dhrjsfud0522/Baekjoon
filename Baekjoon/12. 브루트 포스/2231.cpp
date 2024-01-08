//https://www.acmicpc.net/problem/2231

#include <stdio.h>

int main(){
    int n, j, k;
    int l[7] = {};
    scanf("%d", &n);
    for(int h = 2; h < n; h++){
        k = 0;
        j = 10000000;
        for(int i = 0; i < 7; i++){
            k += (h % j) / (j / 10);
            j /= 10;
        }
        if((h + k) == n){
            printf("%d", h);
            return 0;
        }
    }
    printf("0");
    return 0;
}