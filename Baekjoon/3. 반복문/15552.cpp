//https://www.acmicpc.net/problem/15552

#include <stdio.h>
#include <iostream>

int main(){
    
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        std::cin >> a >> b;
        std::cout << a + b;
        std::cout << "\n";
        std::cin.tie(NULL);
    }
    return 0;
}