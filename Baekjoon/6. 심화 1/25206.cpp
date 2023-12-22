//https://www.acmicpc.net/problem/25206

#include <stdio.h>
#include <string.h>
#include <iostream>

int main(){
    char b[3] = {}, l[52] = {};
    float a, n = 0.0, i, k = 0.0;
    for(int h = 0; h < 20; h++){
        scanf("%s %f %s", l, &a, b);
        i = 0.0;
        if(b[0] == 'A'){
            i += 4.0;
        }
        else if(b[0] =='B'){
            i += 3.0;
        }
        else if(b[0] == 'C'){
            i += 2.0;
        }
        else if(b[0] == 'D'){
            i += 1.0;
        }
        else if(b[0] == 'F'){
            i += 0.0;
        }
        if(b[1] == '+'){
            i += 0.5;
        }
        if(b[0] != 'P'){
            n += (float)(a * i);
            k += a;
        }
    }
    printf("%f", n / k);
    return 0;
}
//문제ㅔ 잘 읽기!!!