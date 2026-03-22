#include <stdio.h>

int main() {
    float c, f;

    printf("====Konversi Celcius ke Fahrenheit====\n");
    printf("Masukkan berapa celcius yang mau dikonversi ke fahrenheit: ");
    scanf("%f", &c);

    f = (9.0/5 * c) + 32;

    printf("Hasil Konversi : %.2f", f);

    return 0;
}