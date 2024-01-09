#include <stdio.h>
#include <stdlib.h>

int main(){
    int c = 0;
    for(int i = 1; i <= 10000000; i++){
        c += i;
    }
    printf("%lld %lld", c, 10000000 * 10000000);
}