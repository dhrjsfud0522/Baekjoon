//https://www.acmicpc.net/problem/1157

#include <stdio.h>
#include <string.h>
#include <iostream>

int main(){
    char l[1000001] = {};
    int al[26] = {};
    int now, count = 0, same = 1;
    std::cin >> l;
    int n = strlen(l); //strlen 함수는 값?이 커서 시간 초과가 난다... 기억하자...
    for(int i = 0; i < n; i++){
        if(count > n / 2){
            break;
        }
        if(int(l[i] < 97)){
            al[int(l[i]) - 65] += 1;
            if(al[int(l[i]) - 65] > count){
                now = int(l[i]);
                count = al[int(l[i]) - 65];
                same = 0;
            }
            else if(al[int(l[i]) - 65] == count){
                same = 1;
                count = al[int(l[i]) - 65];
            }
        }
        else{
            al[int(l[i]) - 97] += 1;
            if(al[int(l[i]) - 97] > count){
                now = int(l[i]) - 32;
                count = al[int(l[i]) - 97];
                same = 0;
            }
            else if(al[int(l[i]) - 97] == count){
                same = 1;
                count = al[int(l[i]) - 97];
            }
        }
    }
    if(same == 0){
        std::cout << char(now);
    }
    else{
        std::cout << "?";
    }
    return 0;
}