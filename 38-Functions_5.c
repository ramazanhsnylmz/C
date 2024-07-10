#include <stdio.h>
#include <math.h>

/*1.ÖRNEK ASAL SAYI ,ARMSTRONG SAYI, MÜKEMMEL SAYI*/
int MukemmelSayiMi(int sayi);
int ArmstrongSayiMi(int sayi);
int AsalMi(int sayi);

int main()
{
int sayi;
printf("Lutfen bir sayi giriniz :");
scanf("%d", &sayi);
AsalMi(sayi);
ArmstrongSayiMi(sayi);
MukemmelSayiMi(sayi);
return 0;
}

int MukemmelSayiMi(int sayi)
{
  int toplam = 0;
  for(int i = 1; i < sayi; i++)
  {
    if((sayi % i) == 0 )
    {
        toplam += i;
    }
  }
  if(sayi == toplam)
  {
    printf("Sayi mukemmel sayidir.\n");
  }
  else
  {
    printf("Sayi mukemmel sayi degildir.\n");
  }
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
    printf("Armstrong bir sayidir.\n");
   }
   else
   {
    printf("Armstrong bir sayi degildir.\n");
   }
}

int AsalMi(int sayi)
{
    int sayac = 0;
    for(int i = 1;i <= sayi; i++)
    {
        if((sayi % i) == 0)
        {
            sayac++;
        }
    }
    if(sayac == 2)
    {
        printf("Sayi asaldir.\n");
    }
    else
    {
        printf("Sayi asal degildir.\n");
    }
}