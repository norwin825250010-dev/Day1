#include <stdio.h>

int main() {
    float angka1, angka2, hasil;
    char operasi;

    printf("====== KALKULATOR DASAR ======\n");

    printf("Masukkan angka pertama : ");
    scanf("%f", &angka1);

    printf("Pilih operator (+, -, *, /): ");
    scanf(" %c", &operasi); 

    printf("Masukkan angka kedua : ");
    scanf("%f", &angka2);

    if (operasi == '+') {
        hasil = angka1 + angka2;
    } else if (operasi == '-') {
        hasil = angka1 - angka2;
    } else if (operasi == '*') {
        hasil = angka1 * angka2;
    } else if (operasi == '/') {
        hasil = angka1 / angka2;
    }

    printf("------------------------------\n");
    printf("Hasil %.1f %c %.1f: %.2f\n",angka1, operasi, angka2, hasil); 

    return 0;
}