//https://www.acmicpc.net/problem/1193

#include <stdio.h>

int main(){
    int a, b, n, c = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        a = 1;
        b = i;
        for(int h = 0; h < i; h++){
            c++;
            if(c == n){
                if(i % 2){
                    printf("%d/%d\n", b, a);
                }
                else{
                    printf("%d/%d\n", a, b);
                }
                return 0;
            }
            a += 1;
            b -= 1;
        }
    }
}