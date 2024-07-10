#include <stdio.h>

int main()
{
    /*1.ÖRNEK BİRDEN N'E KADAR OLAN SAYILARIN TOPLAMI*/
    /*
    int i, n, toplam=0;
    printf("Ust sinir degerini giriniz :");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        toplam += i;
    }
    printf("1'den n'e kadar olan sayilarin toplami :%d", toplam);
    return 0;
    */

   /*2.ÖRNEK BELLİ BİR ARALIKTA OLAN SAYILARIN TOPLAMI*/
   /*
   int i, alt_sinir, ust_sinir, toplam=0;
   printf("Alt sinir degerini giriniz :");
   scanf("%d", &alt_sinir);
   printf("Ust sinir degerini giriniz :");
   scanf("%d", &ust_sinir);
   for(i = alt_sinir; i <= ust_sinir; i++)
   {
    toplam += i;
   }
   printf("%d'den %d'ye kadar olan sayilarin toplami (%d ve %d dahil) :%d", alt_sinir, ust_sinir, alt_sinir, ust_sinir,toplam);
   return 0;
   */

  /*3.ÖRNEK N'E KADAR OLAN ÇİFT SAYİLAR*/
  /*
  int i, n;
  printf("Ust sinir degerini giriniz :");
  scanf("%d", &n);
  for(i = 1; i <= n; i++)
  {
    if((i % 2) == 0)
    {
        printf("%d\n", i);
    }
  }
  return 0;
  */
  
  /*4.ÖRNEK BİR SAYININ ÇARPANLARINI BULMA*/
  int sayi;
  printf("Carpanlari hesaplanacak sayiyi giriniz :");
  scanf("%d", &sayi);
  for(int i = 1; i <= sayi; i++)
  {
    if((sayi % i) == 0)
    {
        printf("%d\n", i);
    }
  }
  return 0;
}