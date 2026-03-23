#include<stdio.h>

int main(){
    float panjang, lebar;
    float luas;

    printf("Masukkan Lebar Persegi panjang: ");
    scanf("%f", &lebar);

    printf("Masukkan Panjang persegi panjang: ");
    scanf("%f", &panjang);

    luas = panjang * lebar;

    printf("Luas Persegi panjang adalah %.2f", luas);

    return 0;

}