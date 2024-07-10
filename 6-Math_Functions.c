#include <stdio.h>
#include <math.h>

int main()
{
   /*1.ÖRNEK ÜS ALMA*/
   /*
   double taban, kuvvet, sonuc;
   printf("Taban degerini giriniz :");
   scanf("%lf", &taban); //scanf fonksiyonunda double değişkeni alıyorsak %lf diyoruz.
   printf("Kuvvet degerini giriniz :");
   scanf("%lf", &kuvvet);
   sonuc = pow(taban,kuvvet); //üs alma.
   printf("%.0lf ^ %.0lf = %.0lf", taban, kuvvet, sonuc);
   return 0;
   */

  /*2.ÖRNEK KÖK ALMA*/
  /*
  double sayi, karekok;
  printf("Sayi giriniz :");
  scanf("%lf",&sayi);
  karekok = sqrt(sayi); //karekök alma.
  printf("Karekok Sonuc :%.3lf", karekok);
  return 0;
  */

 /*3.ÖRNEK FAİZ HESAPLAMA*/
 float anapara, zaman, faizorani, faizmiktari,faizmiktari2;
 printf("Ana para miktarini giriniz :");
 scanf("%f",&anapara);
 printf("Zamani giriniz :");
 scanf("%f",&zaman);
 printf("Faiz oranini giriniz :");
 scanf("%f",&faizorani);
 faizmiktari = (anapara*zaman*faizorani) / 100;
 printf("Basit faiz hesabi ile hesaplanan faiz miktari :%f\n",faizmiktari);
 faizmiktari2 = anapara * (pow((1+faizorani / 100),zaman));
 printf("Bileşik faiz hesabi ile hesaplanan faiz miktari :%f", faizmiktari2);
 return 0;
}