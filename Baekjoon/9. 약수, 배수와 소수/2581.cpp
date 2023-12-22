//https://www.acmicpc.net/problem/2581

#include <stdio.h>

int main(){
    int n, m, c, s = 0, min = 0;
    scanf("%d\n%d", &m, &n);
    for(int i = m; i <= n; i++){
        c = 0;
        for(int j = 2; j <= i; j++){
            c = 1;
            if(j != i){
                if(i % j == 0){
                    c = 0;
                    break;
                }
            }
            
        }
        if(c){
            s += i;
            if(min == 0){
                min = i;
            }
        }
    }
    if(s == 0){
        printf("-1");
    }
    else{
        printf("%d\n%d", s, min);
    }
    return 0;
}