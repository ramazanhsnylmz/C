#include <stdio.h>

int main()
{
    /*1.ÖRNEK DİZİLERİN DÖNGÜLER İLE KULLANIMI*/
    int benimDizim[10] = {25, 50, 75, 100};
    int i;
    for(i = 0; i < 13; i++)
    {
        printf("%d\n", benimDizim[i]); //Dizinin tüm elemanlarını yazdırma. İlk 4'ünü ben tanımladım normal vericek, sonraki 6 tane 0 değeri döndürcek çünkü 10'luk yer açtım ama doldurmadım, daha sonra 10'luk yer açmama rağmen 3 tane daha değer de istersem diziler hafızada ekstra yer açtıkları için onlar da hafızda artık ne varsa anlamsız bir değer döndürcek.Yani toplamda 13 değer döncek 4 tanesi anlamlı, 6 tane boş ve 3 tane de anlamsız değer döndürecek.
    }
    return 0;
}