//https://www.acmicpc.net/problem/2941

#include <stdio.h>
#include <string.h>

int main(){
    char l[102] = {}, p[101] = {};
    scanf("%s", l);
    int s = 0, m = strlen(l), c = 0;
    for(int i = 0; i < m; i++){
        if(l[i] == 'c' && (l[i + 1] == '=' || l[i + 1] == '-')){
            i += 1;
        }
        else if(l[i] == 'd' && l[i + 1] == 'z' && l[i + 2] == '='){
            i += 2;
        }
        else if((l[i] == 'd' && l[i + 1] == '-') || (l[i] == 'l' && l[i + 1] == 'j')){
            i += 1;
        }
        else if((l[i] == 'n' && l[i + 1] == 'j') || (l[i] == 's' && l[i + 1] == '=')){
            i += 1;
        }
        else if(l[i] == 'z' && l[i + 1] == '='){
            i += 1;
        }
        c += 1;
    }
    printf("%d", c);
    return 0;
}