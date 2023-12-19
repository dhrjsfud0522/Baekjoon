//https://www.acmicpc.net/problem/2563

#include <stdio.h>

int main(){
    int l[101][101] = {};
    int n, a, b, c = 0;
    scanf("%d", &n);
    for(int k = 0; k < n; k++){
        scanf("%d %d", &a, &b);
        for(int i = a; i < a + 10; i++){
            for(int h = b; h < b + 10; h++){
                if(l[i][h] != 1){
                    c += 1;
                    l[i][h] = 1;
                }
            }
        }
    }
    printf("%d", c);
    return 0;
}