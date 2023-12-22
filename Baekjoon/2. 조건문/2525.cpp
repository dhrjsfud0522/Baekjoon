//https://www.acmicpc.net/problem/2525

#include <stdio.h>

int main(){
    int h, m, c;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    if(m + c >= 60){
        h += (m + c) / 60;
        h = h % 24;
        
        m = (m + c) % 60;
    }
    else{
        m += c;
    }
    printf("%d %d", h, m);

    return 0;
}