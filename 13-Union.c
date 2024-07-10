#include <stdio.h>
#include <string.h>

union Veri //Struct içerisindeki bütün değişkenleri aynı anda tutar hafızada daha fazla yer kaplar. union ise bunlardan sadece bir değişkeni hafızada tutar bu sayede daha az hafıza kullanır. Yani hafıza sıkıntısı varsa union tercih edilir aksi takdirde struct iş görür.
{
int i;
float f;
char str[20];
}; //; buna dikkat et!

int main()
{
   /*1.ÖRNEK UNİON VERİ*/
   union Veri veri1;
   veri1.i = 10;
   veri1.f = 220.5;
   strcpy(veri1.str, "Ramazan");
   printf("Verinin büyüklüğü :%d\n", sizeof(veri1));
   printf("veri.i :%d\n", veri1.i);
   printf("veri.f :%.0f\n", veri1.f);
   printf("veri.str :%s\n", veri1.str);
   printf("****************\n");
   veri1.i = 103;
   printf("Verinin büyüklüğü :%d\n", sizeof(veri1));
   printf("veri.i :%d\n", veri1.i);
   printf("veri.f :%.0f\n", veri1.f);
   printf("veri.str :%s\n", veri1.str);
   printf("****************\n");
   veri1.f = -203.45;
   printf("Verinin büyüklüğü :%d\n", sizeof(veri1));
   printf("veri.i :%d\n", veri1.i);
   printf("veri.f :%.0f\n", veri1.f);
   printf("veri.str :%s\n", veri1.str);
   printf("****************\n"); //unionda en son hangi veriye eriştiysek o düzgün çıkarken diğer veriler bozulmuş bir şekilde çıkıyor.
   return 0;
}