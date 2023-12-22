//https://www.acmicpc.net/problem/9506

#include <stdio.h>
#include <string.h>

int main(){
    int n, c = 0, s = 0;
    int l[10002] = {};
    while(1){
        scanf("%d", &n);
        c = 0;
        s = 0;
        if(n == -1){
            break;
        }
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                l[c] = i;
                c++;
                s += i;
            }
        }
        if(n == s){
            printf("%d = ", n);
            for(int h = 0; h < c - 1; h++){
                printf("%d + ", l[h]);
            }
            printf("%d\n", l[c - 1]);
        }
        else{
            printf("%d is NOT perfect.\n", n);
        }
    }
    return 0;
}