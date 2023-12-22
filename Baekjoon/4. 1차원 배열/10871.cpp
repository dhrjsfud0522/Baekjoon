//https://www.acmicpc.net/problem/10871

#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int l[n];
    for(int k = 0; k < n; k++){
        scanf("%d", &l[k]);
        if(l[k] < x){
            printf("%d ", l[k]);
        }
    }
    return 0;
}