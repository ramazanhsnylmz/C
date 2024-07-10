#include <stdio.h>

int main()
{
    /*1.ÖRNEK ADRES İŞARETLERİ*/
    char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4; //10.4f; şeklinde de tanımlayabilirdik.
    long long buyuk_tamsayi = 989898989; //989898989ll; şeklinde de tanımlayabilirdik.
    printf("Karakter degiskeninin degeri = %c, karakter degiskeninin adresi = %d\n", karakter, &karakter); //&karakter yazarak karakter adlı değişkenin tutulduğu adresi yazdırır.
    printf("Tamsayi degiskeninin degeri = %d, tamsayi degiskeninin adresi = %d\n", tamsayi, &tamsayi);
    printf("Gercel Sayi degiskeninin degeri = %.1f, gercel sayi degiskeninin adresi = %d\n", gercel_sayi, &gercel_sayi);
    printf("Buyuk Tam Sayi degiskeninin degeri = %ld, buyuk tam sayi degiskeninin adresi = %d\n", buyuk_tamsayi, &buyuk_tamsayi);
    return 0;
}