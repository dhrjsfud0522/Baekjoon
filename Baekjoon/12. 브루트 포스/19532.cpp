//https://www.acmicpc.net/problem/19532

#include <stdio.h>

int main(){
    int a, b, c, d, e, f, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a == 0){
        y = c / b;
        x = (f - (e * y)) / d;
    }
    else if(d == 0){
        y = f / e;
        x = (c - (b * y)) / a;
    }
    else if(b == 0){
        x = c / a;
        y = (f - (d * x)) / e;
    }
    else if(e == 0){
        x = f / d;
        y = (c - (a * x)) / b;
    }
    else{
        x = ((c * e) - (b * f)) / ((a * e) - (b * d));
        y = (c - (a * x)) / b;
    }
    printf("%d %d", x, y);
    return 0;
}