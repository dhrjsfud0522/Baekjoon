//https://www.acmicpc.net/problem/14215

#include <stdio.h>

int main(){
    int l[3] = {}, s, n[3] = {}, min = 500;
    scanf("%d %d %d", &l[0], &l[1], &l[2]);
    for(int i = 0; i < 3; i++){
        s = l[0] + l[1] + l[2] - l[i];
        n[i] = l[i];
        while(s <= n[i]){
            n[i] -= 1;
        }
        n[i] += s;
        if(n[i] < min){
            min = n[i];
        }
    }
    printf("%d", min);
    return 0;
}