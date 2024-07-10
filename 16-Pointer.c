#include <stdio.h>

int main()
{
    /*1.ÖRNEK POINTER*/
    /*
    int sayi = 10;
    int * isaretci; //pointer
    isaretci = &sayi; //pointerın sayi adlı değişkenin adresini tutmasını sağladık.
    printf("Sayi degiskenin icerigi :%d\n", sayi);
    printf("Sayi degiskenin adresi :%d\n", &sayi); //sayi değişkenin adresi
    printf("**************\n");
    printf("Isaretci degiskenin icerigi = %d\n", isaretci); //sayi degiskenin adresini bunda tuttuğumuz için içeriği sayi değişkenin adresidir.
    printf("Isaretci degiskenin adresi = %d\n", &isaretci); //burda ise her degisken bir adresde tutulduğu için bu pointerın da bir adresi var. Kısacası bu da isaretcinin adresi.
    printf("Isaretci degiskenin isaret ettigi deger = %d\n", *isaretci); //bu da içeriğinde tuttuğu adresdeki değişkenin içeriğini verir.
    return 0;
    */

   /*2.ÖRNEK POINTER İLE İŞLEM*/
   int sayi1, sayi2, toplam;
   int *isaretci1, *isaretci2;
   isaretci1 = &sayi1; //işaretci1 sayi1'in adresini tutuyor.
   isaretci2 = &sayi2; //işaretci2 sayi2'nin adresini tutuyor.
   printf("iki sayi giriniz :\n");
   scanf("%d%d", isaretci1, isaretci2); //buraya dikkat; scanf kullanımında!... isaretci1 = &sayi1'e eşit olduğu için scanf'de & kullanmıyoruz.
   toplam = *isaretci1 + *isaretci2; //*isaretci1 sayi1'in degerini yazar aynı şekilde *isaretci2'de bu yüzden toplarsak düz sayi1+sayi2 olur.
   printf("Toplam :%d",toplam);
   return 0;
}