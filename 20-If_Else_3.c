#include <stdio.h>

int main()
{
  /*1.ÖRNEK IF, ELSEIF, ELSE*/
  int sayi1, sayi2, sayi3, maksimum;
  printf("Lutfen 3 adet sayi giriniz :\n");
  printf("1.");
  scanf("%d", &sayi1);
  printf("2.");
  scanf("%d", &sayi2);
  printf("3.");
  scanf("%d", &sayi3);
  if((sayi1 > sayi2) && (sayi1 > sayi3))
  {
    maksimum = sayi1;
  }
  else if((sayi2 > sayi1) && (sayi2 > sayi3))
  {
    maksimum = sayi2;
  }
  else
  {
    maksimum = sayi3;
  }
  printf("En buyuk sayi :%d", maksimum);
  return 0;
}