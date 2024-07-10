#include <stdio.h>

int main()
{
 /*1.ÖRNEK IF, ELSEIF, ELSE*/
 /*
 int sayi;
 printf("Lutfen bir sayi giriniz :\n");
 scnaf("%d", &sayi);
   if(sayi < 0) //if ile else if arasındaki fark tüm if koşullarına teker teker girer ve bakar ama bir else if bloğunda sağlanan durum varsa diger else if bloklarına girmez o blokları kontrol etmez.
   {
    printf("Sayi negatif");
   }
   else if(sayi > 0)
   {
    printf("Sayi pozitif");
   }
   else //else ise hiçbir koşul sağlanmadıysa çalışır.
   {
    printf("Sayi 0'dir");
   }
   return 0;
   */

  /*2.ÖRNEK IF, ELSEIF, ELSE*/
  int sayi1, sayi2, sayi3, maksimum;
  printf("Lutfen 3 adet sayi giriniz :\n");
  printf("1.");
  scanf("%d", &sayi1);
  printf("2.");
  scanf("%d", &sayi2);
  printf("3.");
  scanf("%d", &sayi3);
  maksimum = sayi1;
  if(maksimum < sayi2)
  {
    maksimum = sayi2;
  }
  if(maksimum < sayi3)
  {
    maksimum = sayi3;
  }
  printf("En buyuk sayi :%d", maksimum);
  return 0;
}