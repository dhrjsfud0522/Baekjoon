//https://www.acmicpc.net/problem/2798

#include <stdio.h>

int main(){
    int n, m, i = -300000;
    scanf("%d %d", &n, &m);
    int l[n] = {0};
    for(int h = 0; h < n; h++){
        scanf("%d", &l[h]);
    }
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            for(int t = 0; t < n; t++){
                if(j != k && k != t && t != j){
                    if((l[j] + l[k] + l[t]) <= m){
                        if((m - (l[j] + l[k] + l[t])) < (m - i)){
                            i = l[j] + l[k] + l[t];
                            }
                        }
                }
                
            }
        }
    }
    printf("%d", i);
    return 0;
}