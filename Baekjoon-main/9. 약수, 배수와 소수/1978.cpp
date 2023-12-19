//https://www.acmicpc.net/problem/1978

#include <stdio.h>

int main(){
    int n, m, k, c = 0;
    scanf("%d", &n);
    for(int h = 0; h < n; h++){
        scanf("%d", &m);
        k = 0;
        if(m == 1){
            k = 1;
        }
        for(int i = 2; i < m; i++){
            k = 0;
            if(m % i == 0){
                k = 1;
                break;
            }
        }
        if(!k){
            c += 1;
        }
    }
    printf("%d", c);
    return 0;
}