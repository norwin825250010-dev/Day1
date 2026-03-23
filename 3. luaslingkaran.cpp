#include<stdio.h>

int main(){
    float l, r;
    float phi = 3.14;

    printf ("Masukkan jari jari dari lingkaran : ");
    scanf("%f", &r);

    l = phi * r * r;

    printf("luas lingkaran adalah %.2f", l);

    return 0;
}