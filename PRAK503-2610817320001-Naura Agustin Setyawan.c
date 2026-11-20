#include <stdio.h>
#include <stdlib.h>

int maksimal(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int minimal(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int n;
    printf("Masukkan jumlah bilangan (N): ");
    scanf("%d", &n);

    int maks = -100000;
    int minim = 100000;

    for (int i = 0; i < n; i++) {
        int nilai;
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
    }

    printf("Output X: %d\n", maks);
    printf("Output Y: %d\n", minim);

    return 0;
}