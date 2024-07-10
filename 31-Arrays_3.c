#include <stdio.h>

int main()
{
    /*1.ÖRNEK DİZİNİN EN BÜYÜK DEĞERİNİN BULUNMASI VE BULUNDUĞU İNDEX DEĞERİNİN BULUNMASI*/
    int benimDizim[] = {3, 8, 1, 7, 2, 9, 5, 4};
    int en_buyuk_deger = benimDizim[0];
    int konum = 0;
    int boyut = sizeof(benimDizim) / sizeof(benimDizim[0]); //32 / 4 = 8 dizinin boyutunu bulmada bir yöntem.
    for(int i = 0; i < boyut; i++)
    {
        if(benimDizim[i] > en_buyuk_deger)
        {
            en_buyuk_deger = benimDizim[i];
            konum = i;
        }
    }
    printf("En buyuk deger :%d\nBulundugu index :%d",en_buyuk_deger, konum);
    return 0;
}