//https://www.acmicpc.net/problem/1436

#include <stdio.h>

int main(){
    int n, t = 666, c = 0, j;
    scanf("%d", &n);
    while(1){
        for(int i = 1; (t / i) > 100 ; i *= 10){
            if((t / i) % 1000 == 666){
                c++;
                if(c == n){
                    printf("%d", t);
                    return 0;
                }
                break; //한번 666이 나오고 또 나올 수 있다는 것을 생각하지 못함
            }//조건에 만족하면 그냥 빠져나오는 것이 좋을듯
        }
        t++;
    }
}