#include <stdio.h>
#include <stdlib.h>

/*1.ÖRNEK DOSYA OKUMA*/
int main()
{
    FILE *fPtr;
    char karakter;
    fPtr = fopen("File.txt","r"); //"r" read modunda aç.
    if(fPtr == NULL)
    {
        printf("Dosya okunamadi.");
        exit(EXIT_FAILURE);
    }
    printf("***Dosya Metni***\n");
    do
    {
        karakter = fgetc(fPtr);
        putchar(karakter); //Dosyadan okuduğunu konsola yazdır.
    }while(karakter != EOF); //EOF (End of File) karakterine denk gelmediğin sürece devam et.
    fclose(fPtr);
    return 0;
}