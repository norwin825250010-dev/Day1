#include<stdio.h>

int main(){
    float alas, tinggi;
    float luas;

    printf("Masukkan Lebar Persegi panjang: ");
    scanf("%f", &alas);

    printf("Masukkan Panjang persegi panjang: ");
    scanf("%f", &tinggi);

    luas = 0.5 * alas * tinggi;

    printf("Luas Persegi panjang adalah %.2f", luas);

    return 0;

}