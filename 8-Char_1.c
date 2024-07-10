#include <stdio.h>

int main()
{
/*1.ÖRNEK CHAR*/
/*
char karakter = 'k'; //char'da tek tırnak kullanıyoruz.
printf("%c\n", karakter); //char'da %c yazıyoruz.
char karsilama[] = "Merhaba Dunya";
printf("%s\n", karsilama); //char ama uzun hali olduğu için string gibi düşünüp %s yazıyoruz.
return 0; 
*/

/*2.ÖRNEK CHAR*/
char karsilama_1[] = "Merhaba!";
char karsilama_2[] = {'M','e','r','h','a','b','a','!','\0'}; //Bir üs satırdaki ile aynı şey burda tek tek veriyoruz '\' ise bitirme komutu gibi düşünebiliriz.
printf("Mesaj 1 :%s\n", karsilama_1);
printf("Mesaj 2 :%s\n", karsilama_2);
printf("Mesaj 1 Boyut :%lu\n" , sizeof(karsilama_1)); //Sayı olduğu için %lu kullanıyoruz %d de kullanabilirdik.
printf("Mesaj 2 Boyut :%lu\n" , sizeof(karsilama_2)); //Sizeof türkçe karakterlerde düzgün çalışmayabilir.
return 0;
}