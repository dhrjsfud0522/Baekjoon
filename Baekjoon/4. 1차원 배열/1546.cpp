//https://www.acmicpc.net/problem/1546

#include <stdio.h>

int main(){
    int n, max = 0;
    float sum = 0;
    scanf("%d", &n);
    int l[n];
    for(int h = 0; h < n; h++){
        scanf("%d", &l[h]);
        if(max < l[h]){
            max = l[h];
        }
    }
    for(int i = 0; i < n; i++){
        sum += (float)l[i] / (float)max * 100.0;
    }
    printf("%f", (float)(sum / n));
    return 0;
}