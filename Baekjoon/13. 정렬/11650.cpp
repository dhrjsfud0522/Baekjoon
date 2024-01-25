//https://www.acmicpc.net/problem/11650

#include <iostream>
#include <algorithm>
using namespace std;

struct point
{
    int x;
    int y;
};

bool compare(const point& a, const point& b) {
    if (a.x == b.x) {
        return a.y < b.y;
    }
    return a.x < b.x;
}

int main() {
    int n;
    scanf("%d", &n);
    struct point l[n];
    for (int i = 0; i < n; i++) std:: cin >> l[i].x >> l[i].y;
    sort(l, l + n, compare);
    for (int i = 0; i < n; i++) cout << l[i].x << " " << l[i].y << "\n";
    return 0;
}
    