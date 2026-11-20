#include <stdio.h>

void biodata(int tahun_lahir, const char* nama, const char* asal) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahun_lahir;

    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahun_lahir;
    char nama[100];
    char asal[100];

    scanf("%d", &tahun_lahir);
    scanf("%s", nama);
    scanf("%s", asal);

    biodata(tahun_lahir, nama, asal);

    return 0;
}