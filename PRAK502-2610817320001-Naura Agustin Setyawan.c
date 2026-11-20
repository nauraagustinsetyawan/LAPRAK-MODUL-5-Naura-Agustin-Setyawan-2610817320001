#include <stdio.h>
#include <stdlib.h>

int mutlak(int angka) {
    if (angka < 0) {
        return -angka;
    }
    return angka;
}

int hitung(int nilai1, int nilai2) {
    int selisih = nilai1 - nilai2;
    return mutlak(selisih);
}

int main() {
    int x1, y1, x2, y2;
    printf("Masukkan x1, y1, x2, dan y2 (pisahkan dengan spasi): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int hasil = hitung(x1, x2) + hitung(y1, y2);
    printf("Output Jarak: %d\n", hasil);

    return 0;
}