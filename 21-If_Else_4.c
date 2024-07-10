#include <stdio.h>
#include <math.h>

int main()
{
    /*1.ÖRNEK KAR ZARAR*/
    /*
    int maliyet, satis_bedeli, kar_zarar;
    printf("Maliyet bedelini giriniz :\n");
    scanf("%d", &maliyet);
    printf("Satis bedelini giriniz :\n");
    scanf("%d", &satis_bedeli);
    if(satis_bedeli > maliyet)
    {
        kar_zarar = satis_bedeli - maliyet;
        printf("Kar %d", kar_zarar);
    }
    else if(maliyet > satis_bedeli)
    {
        kar_zarar = maliyet - satis_bedeli;
        printf("Zarar %d", kar_zarar);
    }
    else
    {
        printf("Kar veya zarar yok.");
    }
    return 0;
    */

   /*2.ÖRNEK ARTIK YIL*/
   /*
   int yil; //Yıl 4'e bölünüp 100'e bölünemiyorsa artık yıldır.
   printf("Yil degerini giriniz :\n");
   scanf("%d", &yil);
   if((yil % 4) == 0 && (yil % 100) != 0)
   {
    printf("Yil artik yildir.");
   }
   else
   {
    printf("Yil artik yil degildir.");
   }
   return 0;
   */

  /*3.ÖRNEK İKİNCİ DERECE DENKLEM KÖK BULMA*/
  float a, b, c;
  float kok1, kok2, imajiner;
  float diskriminant;
  printf("(ax^2 + bx + c) seklindeki ikinci derece denklemin a, b ve c katsayilarini giriniz :");
  scanf("%f%f%f", &a, &b, &c);
  diskriminant = (pow(b,2) - (4 *a*c));
  if(diskriminant > 0)
  {
    kok1 = (-b + sqrt(diskriminant) / (2*a));
    kok2 = (-b - sqrt(diskriminant) / (2*a));
    printf("Iki adet ayik ve gercel kok bulunmaktadir : %.2f ve %.2f", kok1, kok2);
  }
  else if(diskriminant == 0)
  {
    kok1 = kok2 = -b / (2*a);
    printf("Birbirlerine esit iki adet gercel kok bulunmaktadir : %.2f ve %.2f", kok1, kok2);
  }
  else if(diskriminant < 0)
  {
    kok1 = kok2 = -b / (2*a);
    imajiner = sqrt((-diskriminant)) / (2*a);
    printf("Iki adet ayrik ve karmasik kok bulunmaktadir : %.2f + i%.2f ve %.2f  - i%.2f", kok1, imajiner, kok2, imajiner);
  }
  return 0;
}