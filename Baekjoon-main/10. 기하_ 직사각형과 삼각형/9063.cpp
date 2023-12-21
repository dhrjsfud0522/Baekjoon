//https://www.acmicpc.net/problem/9063

#include <stdio.h>

int main(){
    int n, minx = 10000, miny = 10000, maxx = -10000, maxy = -10000;
    scanf("%d", &n);
    int x[n] = {0}, y[n] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
        if(x[i] < minx){
            minx = x[i];
        }
        if(x[i] > maxx){
            maxx = x[i];
        }
        if(y[i] < miny){
            miny = y[i];
        }
        if(y[i] > maxy){
            maxy = y[i];
        }
    }
    printf("%d", (maxx - minx) * (maxy - miny));
    return 0;
}