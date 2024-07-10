#include <stdio.h>

int main()
{
    /*1.ÖRNEK DİZİYE İSTENİLEN İNDEKSİNE DEĞER EKLEME*/
    int eklenecek_sayi, eklenecek_indeks, kaydirma;
    int benimDizim[] = {3,4,1,9,6,2,8};
    int boyut = sizeof(benimDizim) / sizeof(benimDizim[0]);
    for(int i = 0; i < boyut; i++)
    {
        printf("%d ", benimDizim[i]);
    }
    printf("\nDiziye eklenecek sayiyi giriniz :");
    scanf("%d", &eklenecek_sayi);
    printf("Diziye eklenecek indeks degerini giriniz :");
    scanf("%d", &eklenecek_indeks);
    for(int i = boyut - 1 ; i > eklenecek_indeks; i--)
    {
       benimDizim[i] = benimDizim[i-1];
    }
    benimDizim[eklenecek_indeks] = eklenecek_sayi;
    for(int i = 0; i < boyut; i++)
    {
        printf("%d ", benimDizim[i]);
    }
    return 0;
}