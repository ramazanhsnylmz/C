#include <stdio.h>

int main()
{
    /*1.ÖRNEK BİR SAYININ ÇARPIM TABLOSU*/
    /*
    int sayi;
    printf("Carpim tablosu olusturulacak sayiyi giriniz :");
    scanf("%d", &sayi);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",sayi, i, (sayi*i));
    }
    return 0;
    */

    /*2.ÖRNEK FOR İLE BREAK KOMUTUNUN KULLANIMI*/
    /*
    int i = 0;
    for(i = 1; i <= 10; i++)
    {
        if(i == 4)
        {
            break; //i == 4 oldugunda döngüyü kır ve çık demek. Yani ekrana 1 2 3 yazdıracak sadece.
        }
        printf("%d\n", i);
    }
    return 0;
    */

   /*3.ÖRNEK FOR İLE CONTINUE KOMUTUNUN KULLANILMASI*/
   int i;
   for(i = 1; i <= 10; i++)
   {
    if(i == 5)
    {
        continue; //i == 5 olduğunda döngüyü kırmıyacak ama döngünün en başına gidecek ondan sonra gelen kodlar çalışmayacak yani.5 hariç 10'a kadar tüm sayılar yazılacak.
    }
    printf("%d\n", i);
   }
   return 0;
}