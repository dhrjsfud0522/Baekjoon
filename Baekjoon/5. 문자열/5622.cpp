//https://www.acmicpc.net/problem/5622

#include <stdio.h>
#include <string.h>

int main(){
    char l[17];
    int t = 0;
    scanf("%s", l);
    for(int i = 0; i < strlen(l); i++){
        if(int(l[i]) <= 67){
            t += 3;
        }
        else if(int(l[i]) <= 70){
            t += 4;
        }
        else if(int(l[i]) <= 73){
            t += 5;
        }
        else if(int(l[i]) <= 76){
            t += 6;
        }
        else if(int(l[i]) <= 79){
            t += 7;
        }
        else if(int(l[i]) <= 83){
            t += 8;
        }
        else if(int(l[i]) <= 86){
            t += 9;
        }
        else{
            t += 10;
        }
    }
    printf("%d", t);
    return 0;
}