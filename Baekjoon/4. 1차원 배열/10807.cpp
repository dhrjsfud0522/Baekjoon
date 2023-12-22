//https://www.acmicpc.net/problem/10807

#include <stdio.h>

int main(){
    int n, i, v, s = 0;
    scanf("%d", &n);
    int l[n];
    for(int k = 0; k < n; k++){
        scanf("%d", &l[k]);
    }
    scanf("%d", &v);
    for(int j = 0; j < n; j++){
        if(l[j] == v){
            s += 1;
        }
    }
    printf("%d", s);
    return 0;
}