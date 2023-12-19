//https://www.acmicpc.net/problem/10809

#include <stdio.h>

int main(){
    int al[26] = {};
    for(int p = 0; p < 26; p++){
        al[p] = -1;
    }
    char l[101] = {};
    scanf("%s", &l);
    for(int i = 0; i < 101; i++){
        for(int h = 0; h < 26; h++){
            if(l[i] == char(h + 97)){
                if(al[h] == -1){
                    al[h] = i;
                }
            }
        }
    }
    for(int k = 0; k < 26; k++){
        printf("%d ", al[k]);
    }
    return 0;
}