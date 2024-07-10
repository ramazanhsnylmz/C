#include <stdio.h>

int main()
{
  /*1.ÖRNEK BASİT HESAP MAKİNESİ*/
    float sayi1, sayi2, sonuc;
    char islem;
    printf("BASIT HESAP MAKINESI UYGULAMASI\n");
    printf("-----------------------------------\n");
    printf("Lutfen (Sayi1) (/ * + -) (Sayi2) sirasiyla degerleri girin (bosluklu girmeyin) :");
    scanf("%f%c%f", &sayi1, &islem, &sayi2);
    switch (islem)
    {
      case '+':
      sonuc = sayi1 + sayi2;break;
      case '-':
      sonuc = sayi1 - sayi2;break;
      case '/':
      sonuc = sayi1 / sayi2;break;
      case '*':
      sonuc = sayi1 * sayi2;break;
      default:printf("Gecersiz Deger");
    }
    printf("%.2f %c %.2f = %.2f",sayi1,islem,sayi2,sonuc);
    return 0;
}