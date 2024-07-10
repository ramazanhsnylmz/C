#include <stdio.h>
#include <math.h>

/*1.ÖRNEK ARMSTRONG SAYI*/
int ArmstrongSayiMi(int sayi);

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz :");
    scanf("%d", &sayi);
    ArmstrongSayiMi(sayi);
    return 0;
}

int ArmstrongSayiMi(int sayi)
{
   int toplam = 0, basamak_sayisi, orijinal_sayi, son_basamak;
   orijinal_sayi = sayi;
   basamak_sayisi = (int) (log10(sayi) + 1); //Bir sayının basamak sayısını bulurken bunu kullanıyoruz.
   while(sayi > 0)
   {
    son_basamak = (sayi % 10);
    toplam += round(pow(son_basamak, basamak_sayisi)); //Round yuvarlıyor daha sağlıklı çalışması için kullanıyoruz.
    sayi = (int) (sayi / 10);
   }
   if(toplam == orijinal_sayi)
   {
    printf("Armstrong bir sayidir.");
   }
   else
   {
    printf("Armstrong bir sayi degildir.");
   }
}