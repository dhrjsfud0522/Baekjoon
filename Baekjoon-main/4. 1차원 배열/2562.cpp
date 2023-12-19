//https://www.acmicpc.net/problem/2562

#include <stdio.h>

int main(){
    int m = 0, o, k;
    for(int i = 0; i < 9; i++){
        scanf("%d", &k);
        if(m < k){
            o = i + 1;
            m = k;
        }
    }
    printf("%d\n%d", m, o);
    return 0;
}