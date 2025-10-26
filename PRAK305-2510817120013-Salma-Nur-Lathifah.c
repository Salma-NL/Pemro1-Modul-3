#include <stdio.h>

int main() {
    int detik, hari, jam, menit, sisa;

    scanf("%d", &detik);

    hari = detik / 86400;
    sisa = detik % 86400;
    jam = sisa / 3600;
    sisa %= 3600;
    menit = sisa / 60;
    sisa %= 60;

    if (hari > 0)
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, sisa);
    else
        printf("%02d:%02d:%02d", jam, menit, sisa);

    return 0;
}