#include <stdio.h>
/*1.ÖRNEK GLOBAL VE LOKAL DEĞİŞKENLER*/
int BaziIslemlerGerceklestir(int a, int b);
int a = 20;

int main()
{
  int a = 10; //lokal değişken global değişkeni ezdi a = 10 oldu.
  int b = 20;
  int c = 0;

  printf("a degiskenin main() icerisindeki degeri = %d\n", a);
  printf("b degiskenin main() icerisindeki degeri = %d\n", b);
  c = BaziIslemlerGerceklestir(a, b);
  printf("b degiskenin main() icerisindeki degeri = %d\n", c);
  printf("a degiskenin main() icerisindeki degeri = %d\n", a); //Fonksiyonun parantezinede tanımlanan değişkenden bağımsızdır. Önemli olan return edilen şeydir.
  printf("b degiskenin main() icerisindeki degeri = %d\n", b);
  return 0;
}

int BaziIslemlerGerceklestir(int a, int b)
{
    printf("a degiskenin BaziIslemGerceklestir() fonksiyonu icerisindeki giris degeri = %d\n" , a);
    printf("a degiskenin BaziIslemGerceklestir() fonksiyonu icerisindeki giris degeri = %d\n", b);
    a *=12;
    b += 5;
    printf("a degiskenin BaziIslemGerceklestir() fonksiyonu icerisindeki sonraki degeri = %d\n" , a);
    printf("a degiskenin BaziIslemGerceklestir() fonksiyonu icerisindeki sonraki degeri = %d\n" , b);
    return a + b;
}