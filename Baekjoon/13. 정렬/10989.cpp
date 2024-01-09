//https://www.acmicpc.net/problem/10989
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int l[20000] = {};
    for(int t = 0; t < 20000; t++){
        l[t] = 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        l[k - 1] += 1;
    }
    for(int j = 0; j < 20000; j++){
        for(int h = 0; h < l[j]; h++){
            printf("%d\n", j + 1);
        }
    }
}