#include <stdio.h>

int main()
{
    /*1.ÖRNEK ÖZEL KARAKTERLER*/
    char metin1[] = "Merhaba\nDunya!\n"; //\n bir alt satıra geçirir.
    printf("%s", metin1);
    char metin2[] = "Merhaba\tDunya!\n"; //\t bir tab kadar boşluk bırakır.
    printf("%s", metin2);
    char metin3[] = {'M','e','r','h','a','b','a','\0'}; //\0 sonlandırmak için koyuyoruz.
    printf("%s\n", metin3);
    char metin4[] = "Ogretmen iceri girince \"Gunaydin\" diye seslendi.\n"; //\"...\" metin içinde tırnak kullanılmak istenirse.
    printf("%s", metin4);
    char metin5[] = "Ahmet\'in telefonu hic susmuyordu.\n"; //\' kesme işareti kullanılmak istenirse.
    printf("%s", metin5);
    char metin6[] = "\\ karakteri ters taksim veya backslash olarak anilir.\n"; //ters slash koymak istiyorsak \\ böyle yazıyoruz. Yani kısacası kodda bir karşılığı olan karakteri metin olarak yazdırmak istiyorsak başına \ koyduktan sonra yazıyoruz ve onu metin olarak algılıyor.
    printf("%s", metin6);
}