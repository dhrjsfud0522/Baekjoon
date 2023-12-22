//https://www.acmicpc.net/problem/10818

#include <stdio.h>

int main(){
    int n, max, min;
    scanf("%d", &n);
    int l[n];
    scanf("%d", &l[0]);
    max = l[0];
    min = l[0];
    for(int i = 1; i < n; i++){
        scanf("%d", &l[i]);
        if(l[i] > max){
            max = l[i];
        }
        if(l[i] < min){
            min = l[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}