#include <stdio.h>
#include <math.h>

/*1.ÖRNEK TEKLİK ÇİFTLİK*/
/*
int SayiCiftMi(int sayi);

int main()
{
  int sayi;
  printf("Bir sayi giriniz :");
  scanf("%d", &sayi);
  if(SayiCiftMi(sayi) == 1)
  {
    printf("Sayi ciftdir.");
  }
  else
  {
    printf("Sayi tektir.");
  }
  return 0;
}

int SayiCiftMi(int sayi)
{
    if((sayi % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/

/*2.ÖRNEK SAYININ KÜPÜ*/
int SayininKubunuHesapla(int sayi);

int main()
{
  int sayi;
  int c;
  printf("Lutfen bir sayi giriniz :");
  scanf("%d", &sayi);
  printf("%d sayinin kubu :%d",sayi, SayininKubunuHesapla(sayi));
  return 0;
}

int SayininKubunuHesapla(int sayi)
{
    return pow(sayi,3);
}