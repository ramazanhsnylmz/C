#include <stdio.h>

int main()
{
/*1.ÖRNEK TYPECASTİNG*/ 
/*
int g_intSayi1 = 17, g_intSayi2 = 5;
int g_intSonucTamSayi;
float g_flSonucKusuratf;
double g_dbSonucKusuratd;
int g_intSonucTamSayifl;
g_intSonucTamSayi = g_intSayi1 / g_intSayi2;
printf("Tam Sayi Bolme Sonucu :%d\n",g_intSonucTamSayi);
g_flSonucKusuratf = (float) g_intSayi1 / g_intSayi2;
printf("Kusuratli Bolme Sonucu Float :%.20f\n",g_flSonucKusuratf);
g_dbSonucKusuratd = (double) g_intSayi1 / g_intSayi2;
printf("Kusuratli Bolme Sonucu Double :%.20f\n",g_flSonucKusuratf);
g_intSonucTamSayifl = (int) g_flSonucKusuratf;
printf("Kusuratli Sonucu Tam Sayiya Cevirme :%.20f\n",g_flSonucKusuratf);
return 0;
*/

/*2.BINARY SİSTEM*/
/*
int a = 35; //10'luk sayi düzeninde 35
int b = 0b00100011; //2'lik sayı düzeninde 35
int c = 0x23; //16'lık sayı düzeninde 35
printf("a = %d\n",a);
printf("b = %d\n",b);
printf("c = %d\n",c);
return 0;
*/

/*3.ÖRNEK BİRİM ÇEVİRME*/
float cm, metre, km;
printf("Uzunlugu santimetre cinsinden al :");
scanf("%f", &cm); //scanf fonksiyonunda & işareti kullanıyoruz.
metre = cm / 100;
km = metre / 1000;
printf("Metre cinsinden uzunluk :%.3f m \n", metre); 
printf("Kilometre cinsinden uzunluk :%.5f km \n", km); //%.5f virgülden sonra 5 basamak göster demek.
return 0;
}
