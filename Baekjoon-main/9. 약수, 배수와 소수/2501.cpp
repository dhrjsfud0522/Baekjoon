//https://www.acmicpc.net/problem/2501

#include <stdio.h>

int main(){
    int n, k, m;
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++){
        if(k == 0){
            break;
        }
        if(n % i == 0){
            k--;
            m = i;
        }
    }
    if(k == 0){
        printf("%d", m);
    }
    else{
        printf("0");
    }
    return 0;
}