#include <stdio.h>

int reverse_angka(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int a_aksen = reverse_angka(a);
    int b_aksen = reverse_angka(b);

    int c = a_aksen + b_aksen;

    printf("%d\n", reverse_angka(c));

    return 0;
}