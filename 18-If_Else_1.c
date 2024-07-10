#include <stdio.h>

int main()
{
    /*1.ÖRNEK IF*/
    /*
    int sayi1, sayi2;
    printf("Lutfen iki sayi giriniz :\n");
    scanf("%d%d", &sayi1, &sayi2);
    if(sayi1 > sayi2)
    {
       printf("%d Daha Buyuktur.",sayi1);
    }
    if(sayi2 > sayi1)
    {
       printf("%d Daha Buyuktur.",sayi2);
    }
    if(sayi1 == sayi2)
    {
       printf("Sayilar Birbirine esittir.");
    }
    return 0;
    */

   /*2.ÖRNEK IF*/
   int sayi1;
   printf("Lutfen bir sayi giriniz :\n");
   scanf("%d", &sayi1);
   if(sayi1 < 0)
   {
    printf("Sayi negatif");
   }
    if(sayi1 > 0)
   {
    printf("Sayi pozitif");
   }
    if(sayi1 == 0)
   {
    printf("Sayi 0'dir");
   }
   return 0;
}