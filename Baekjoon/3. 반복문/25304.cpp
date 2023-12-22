//https://www.acmicpc.net/problem/25304

#include <stdio.h>

int main(){
    int x, n, a, b, s = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        s += a * b;
    }
    if(x == s){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}