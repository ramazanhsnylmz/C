#include <stdio.h>

/*1. ÖRNEK AUTO STATIC*/
/*
void DegerArtir(int k);
int main()
{
  DegerArtir(3);
  DegerArtir(3);
  DegerArtir(3);
  DegerArtir(3);
  return 0;   
}
void DegerArtir(int k)
{
   //auto zaten hiçbir şey yazmassak geçerli olan şeydir. Her fonksiyona girdiğinde değeri sıfırlanıyor.
   //static önceki değeri tutuyor. Değişkenin değerini korur.
   static int i = 0;
   printf("%d ", i);
   i += k;
}
*/ 

/*2.ÖRNEK EXTERN*/
/*
int x = 10;
int y = 50;
int main()
{
   extern int y; //extern olarak tanımlanmazsa değeri 0 olur. Çünkü lokal değişken globali ezer ve lokal değişken etkin olur. extern yazarak global'deki veriyi aldık.
   printf("global olan x degiskenin  degeri :%d\n", x);
   printf("extern olan y degiskenin degeri :%d", y);
   return 0;   
}
*/

/*3.ÖRNEK REGISTER*/
int main()
{
    register int i; //Daha kısıtlı ama kolay erişilebilir oluyor. Genellikle for içerisinde kullanılan diğer değişkenlere nazaran daha önemsiz değişkenlerde kullanılır.
    int sayi_dizisi[5] = {8, 10, 12, 14, 16};
    for(i = 0; i < 5; i++)
    {
       printf("sayi_dizisi[%d] = %d\n", i, sayi_dizisi[i]);
    }
    return 0;
}
