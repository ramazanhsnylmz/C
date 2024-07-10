#include <stdio.h>
/*1.ÖRNEK GLOBAL VE LOKOAL DEĞİŞKENLER*/
/*
Global değişkenler, eğer programcı tarafından belirtilmezse
derleyici tarafından otomatik olarak ilklendirilir.

Veri Tipi      Varsayılan İlklendirme
int                      0
char                   '\0'
float                    0
double                   0
pointer                 NULL
*/

int g; //Global değişken.

int main()
{
   int a, b; //Lokal değişken. Lokal değişkenler derleyici tarafından otomatik olarak ilklendirilmez. Bilgisayar belleğinde kalan garip/tuhaf değerleri almamaları için programcılar tarafından ilklendirilmelerinde fayda bulunmaktadır. Yani ilk değer atamssak saçma sapan değerler alır.
   a = 10;
   b = 20;
   g = a + b;
   printf("a= %d, b=%d, c=%d", a, b, g);
   return 0; //Dipnot : Aynı isimde hem global hem lokal değişken tanımlarsak lokal globalden üstün gelerek lokal değişken çalışır. 
}