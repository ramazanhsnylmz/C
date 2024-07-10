#include <stdio.h>

/*1.ÖRNEK ÖZYİNELEME FAKTÖRYEL HESABI*/
/*
int Faktoryelhesabi(int n);

int main()
{
   int sayi;
   printf("Kac faktoryel :");
   scanf("%d", &sayi);
   printf("%d Faktoryel = %d", sayi, Faktoryelhesabi(sayi));
   return 0;
}

int Faktoryelhesabi(int n)
{
   int sonuc;
   if(n == 1)
   {
    sonuc = 1;
   }
   else
   {
    sonuc = n * Faktoryelhesabi(n-1); 
   }
   return sonuc;
}
*/

/*2.ÖRNEK ÖZYİNELEME FİBONACCİ*/
int FibonacciSayisiniHesapla(int n);

int main()
{
  int n1=0, n2=1, n3;
  int adet;
  printf("Fibonacci dizisinden ilk kac elemanin hesaplanmasini istersiniz :");
  scanf("%d", &adet);
  printf("%d %d ", n1, n2);
  for(int i = 2; i < adet; i++)
  {
    n3 = n1 + n2;
    printf("%d ", n3);
    n1 = n2;
    n2 = n3; 
  }
  printf("\nN. deger :%d",FibonacciSayisiniHesapla(adet));
  return 0;
}

int FibonacciSayisiniHesapla(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return FibonacciSayisiniHesapla(n-1) + FibonacciSayisiniHesapla(n-2);
    }
}
