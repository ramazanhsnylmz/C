#include <stdio.h>
#include <string.h>

int main()
{
    /*1.ÖRNEK METİNLER*/
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dunya!";
    char metin3[20];
    strcat(metin1, metin2); //strcat metin1'e metin2'yi ekler sonuç metin1'de depolanır.
    printf("%s\n", metin1);
    strcpy(metin3, metin1); //strcpy metin1 içeriğini metin3'e kopyalar.
    printf("%s\n", metin3);
    printf("Metin 1:%s\n", metin1);
    printf("Metin 2:%s\n", metin2);
    printf("Metin 3:%s\n", metin3);
    printf("Metin1 ile Metin3 Uzunluk Farki :%d\n",strcmp(metin1,metin3)); //strcmp metin1 ile metin3'ün uzunluğu arasındaki farkı verir. 
    printf("Metin1 ile Metin2 Uzunluk Farki :%d\n",strcmp(metin1,metin2));
    printf("Metin2 ile Metin3 Uzunluk Farki :%d\n",strcmp(metin2,metin3));
    return 0;
}