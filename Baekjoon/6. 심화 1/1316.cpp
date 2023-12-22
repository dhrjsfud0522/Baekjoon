//https://www.acmicpc.net/problem/1316

#include <stdio.h>
#include <string.h>

int main(){
    char l[102] = {};
    int n[26] = {};
    int k, j, t, m;
    char c;
    scanf("%d", &k);
    t = k;
    for(int i = 0; i < k; i++){
        scanf("%s", l);
        for(int h = 0; h < 26; h++){
            n[h] = 0;
        }
        j = strlen(l);
        for(m = 0; m < j; m++){
            c = l[m];
            if(n[int(l[m]) - 97] == 1){
                t -= 1;
                break;
            }
            else{
                n[int(l[m]) - 97] = 1;
                if(l[m + 1] == c){
                    while(l[m] == c){
                        m += 1;
                    }
                    m -= 1;
                }
                
            }
        }
    }
    printf("%d", t);
    return 0;
}