#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    return m;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", MaxBilangan(a, b, c, d));
    return 0;
}