#include <stdio.h>
#include <string.h> //strlen fonksiyonunu kullanabilmek için bu kütüphaneyi ekledik.

int main()
{
    /*1.ÖRNEK CHAR STRLEN SIZEOF*/
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Ingiliz Alfabesi Strlen :%d\n", strlen(ingiliz_alfabesi)); //sizeof'dan farkı sondaki \0 bitirme karakterini almıyor yani gerçek uzunluğu öğreniyoruz.
    printf("Ingiliz Alfabesi Sizeof :%d\n", sizeof(ingiliz_alfabesi));
    printf("\n");
    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
    printf("Turk Alfabesi Strlen :%d\n", strlen(turk_alfabesi)); //Türkçe karakterler ikisinde de düzgün çalışmıyor.
    printf("Turk Alfabesi Strlen :%d\n", sizeof(turk_alfabesi));
    printf("\n");
    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Deneme Strlen :%d\n", strlen(deneme)); //Bu örnekte ise strlen ne kadar doluysa onun uzunluğunu, sizeof ise hafızada ne kadar yer kapladığını gösteriyor.
    printf("Deneme Sizeof :%d\n", sizeof(deneme));
    return 0;
}