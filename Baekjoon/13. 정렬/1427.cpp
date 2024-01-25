//https://www.acmicpc.net/problem/1427

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    char a[100] = {};
    int l[100] = {};
    scanf("%s", a);
    int h = strlen(a);
    for(int j = 0; j < h; j++){
        l[j] = int(a[j]);
    }
    sort(l, l + h, compare);
    for(int k = 0; k < h; k++){
        printf("%c", l[k]);
    }
    return 0;
}