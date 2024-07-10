#include <stdio.h>
#include <string.h>

struct PersonelBilgisi //structlar sınıfların(class) atası sayılır. Classlar structların daha gelişmiş bir versiyonudur.
{
int Yas;
float Maas;
char Isim[30];
char Cinsiyet[8];
}; //; buna dikkat et!

int main()
{
    /*1.ÖRNEK STRUCT PERSONEL*/
    struct PersonelBilgisi Personel1;
    strcpy(Personel1.Isim, "Ramazan Hasan Yilmaz");
    strcpy(Personel1.Cinsiyet, "Erkek");
    Personel1.Yas = 18;
    Personel1.Maas = 5000;
    printf("Personelin Adi :%s\n", Personel1.Isim);
    printf("Personelin Cinsiyeti :%s\n", Personel1.Cinsiyet);
    printf("Personelin Yasi :%d\n", Personel1.Yas);
    printf("Personelin Maas :%.0f\n", Personel1.Maas);
    printf("**************\n");
    struct PersonelBilgisi Personel2 = {20,25000,"Mustafa Topal","Erkek"};
    printf("Personelin Adi :%s\n", Personel2.Isim);
    printf("Personelin Cinsiyeti :%s\n", Personel2.Cinsiyet);
    printf("Personelin Yasi :%d\n", Personel2.Yas);
    printf("Personelin Maas :%.0f\n", Personel2.Maas);
    printf("**************\n");
    struct PersonelBilgisi Personel3;
    Personel3 = Personel2; //Personel 2'yi Personel3'e kopyaladık.
    printf("Personelin Adi :%s\n", Personel3.Isim);
    printf("Personelin Cinsiyeti :%s\n", Personel3.Cinsiyet);
    printf("Personelin Yasi :%d\n", Personel3.Yas);
    printf("Personelin Maas :%.0f\n", Personel3.Maas);
    printf("**************\n");
    return 0;
}