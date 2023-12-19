//https://www.acmicpc.net/problem/3052

#include <stdio.h>

int check(int j, int l[10]){
   for(int h = 0; h < 10; h++){
        if(l[h] == j){
            return 0;
        }
   }
   return 1;
}

int main(){
    int l[10] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42}, k = 0, n;
    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        if(check(n % 42, l)){
            l[k] = n % 42;
            k++;
        }
    }
    printf("%d", k);
    return 0;
}