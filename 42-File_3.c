#include <stdio.h>
#include <stdlib.h>

/*1.ÖRNEK HATA YAKALAMA VE PROGRAMDAN ÇIKIŞ*/
int main()
{
    int bolunen, bolen, bolum;
    printf("Boluneni giriniz :");
    scanf("%d", &bolunen);
    printf("Boleni giriniz :");
    scanf("%d", &bolen);
    if(bolen == 0) //Bir sayı 0'a bölünemeyeceği için hata olur. Burda hata yakalama ve programdan çıkış işlemlerini yapıyoruz.
    {
        fprintf(stderr, "Sifira bolme hatasi! Programdan cikiliyor...\n");
        exit(-1); //exit(EXIT_FAILURE).  
    }
    bolum = bolunen / bolen;
    fprintf(stderr, "Bolum (Sonuc) :%d\n", bolum);
    exit(0); //exit(EXIT SUCCESS).   
}