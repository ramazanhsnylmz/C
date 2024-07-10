#include <stdio.h>

/*1.ÖRNEK CONSTANT*/
int main()
{
    const int SaatdekiDakikaSayisi = 60; //Değeri hiç değişmeyecek değişkenlere const şeklinde yazabiliriz. Genellikle evrensel olarak kabul edilen değişmeyecek şeylere verilir.
    const float PI = 13.4;
    printf("Saatdeki dakika sayisi :%d\n",SaatdekiDakikaSayisi);
    printf("Pi sayisi :%.1f\n", PI);
    //PI = PI + 5; bunu yapamayız çünkü PI değişkenini const diye tanımladığımız için değeri değişemez sabittir. 
    return 0;
}