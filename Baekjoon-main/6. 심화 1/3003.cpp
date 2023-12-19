//https://www.acmicpc.net/problem/3003

#include <stdio.h>

int main(){
    int i[6] = {}, p[6] = {1, 1, 2, 2, 2, 8};
    scanf("%d %d %d %d %d %d", &i[0], &i[1], &i[2], &i[3], &i[4], &i[5]);
    for(int n = 0; n < 6; n++){
        printf("%d ", p[n] - i[n]);
    }
    return 0;
}