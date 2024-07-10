#include <stdio.h>

int main()
{
    /*1.ÖRNEK ALFABETİK KARAKTER*/
    /*
    char karakter;
    printf("Lutfen bir karakter giriniz :");
    scanf("%c", &karakter);
    if((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
    {
     printf("Girilen karakter alfabetik bir karakterdir.");    
    }
    else
    {
     printf("Girilen karakter alfabetik bir karakter degildir.");  
    }
    return 0;
    */

   /*2.ÖRNEK HAFTANIN GÜNLERİ IF ELSE*/
   /*
   int gun;
   printf("1-7 Arasinda bir sayi giriniz :");
   scanf("%d", &gun);
   if(gun == 1)
   {
    printf("Pazartesi");
   }
   else if(gun == 2)
   {
    printf("Sali");
   }
   else if(gun == 3)
   {
    printf("Carsamba");
   }
   else if(gun == 4)
   {
    printf("Persembe");
   }
   else if(gun == 5)
   {
    printf("Cuma");
   }
   else if(gun == 6)
   {
    printf("Cumartesi");
   }
   else if(gun == 7)
   {
    printf("Pazar");
   }
   else
   {
    printf("Gecersiz deger.");
   }
   return 0;
   */

  /*3.ÖRNEK HAFTANIN GÜNLERİ SWITCH CASE*/
  /*
  int gun;
  printf("1-7 Arasinda bir sayi giriniz :");
  scanf("%d", &gun);
  switch (gun)
  {
   case 1:printf("Pazartesi");break;
   case 2:printf("Sali");break;
   case 3:printf("Carsamba");break;
   case 4:printf("Persembe");break;
   case 5:printf("Cuma");break;
   case 6:printf("Cumartesi");break;
   case 7:printf("Pazar");break;
   default:printf("Gecersiz deger.");
  }
  return 0;
  */

  /*4.ÖRNEK HAFTA İÇİ HAFTA SONU ORTAK CASE*/
  int gun;
  printf("1-7 Arasinda bir sayi giriniz :");
  scanf("%d", &gun);
  switch (gun)
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    printf("Hafta Ici");break;
    case 6:
    case 7:
    printf("Hafta Sonu");break;
    default:printf("Gecersiz Deger.");
  }
  return 0;
}