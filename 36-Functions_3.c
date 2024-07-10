#include <stdio.h>
#include <math.h>

/*1.ÖRNEK ASAL MI*/
int AsalMi(int sayi);

int main()
{
   int sayi;
   printf("Lutfen bir sayi giriniz :");
   scanf("%d", &sayi);
   if(AsalMi(sayi) == 1)
   {
    printf("Sayi asaldir.");
   }
   if(AsalMi(sayi) == 0)
   {
    printf("Sayi asal degildir.");
   }
   return 0;
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
        return 1;
    }
    else
    {
        return 0;
    }
}
