#include <stdio.h>
#include <stdlib.h> //# ile başlayan satırlar önişlemci satırlarıdır derleyici devreye girmeden çalışır.

#define BUYUK_SAYI_1 1000000 //Satır sonunda ; yok ve = yok. Define ile tanımlanan değişkenler kodun her yerinde kullanılabilir. define ile tanımlanan değişkenler genellikle büyük harfle tanımlanır.

/*1.ÖRNEK DEFINE UNDEF*/
int BelirliIslemGerceklestir(int girdi)
{
    return (girdi < BUYUK_SAYI_1);  //define ile tanımlandığı için kodun her yerinde kullanılabilir.
    //return (girdi < BUYUK_SAYI_2) yazsaydık hata verirdi çünkü bu değişken kodun her yerinde kullanılamıyor.
}

int main()
{
    int ilk_degisken = 20;
    int ikinci_degisken = 25;
    int sonuc1, sonuc2, sonuc3;
    const int BUYUK_SAYI_2 = 1000000;
    printf("Buyuk sayi : %d\n", BUYUK_SAYI_1);
    sonuc1 = (ilk_degisken < BUYUK_SAYI_1);
    printf("Sonuc 1 : %d\n", sonuc1);
    sonuc2 = (ilk_degisken < BUYUK_SAYI_1);
    printf("Sonuc 2 : %d\n", sonuc2);
    #undef BUYUK_SAYI_1 //undef ile değişkenin değerini tekrar değiştirebiliriz. const'tan farkı bu.
    #define BUYUK_SAYI_1 30000000
    printf("Butuk sayi : %d\n", BUYUK_SAYI_1);
    sonuc3 = BelirliIslemGerceklestir(30);
    printf("Sonuc 3: %d\n", sonuc3);
    return 0; 
}