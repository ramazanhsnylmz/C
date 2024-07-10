#include <stdio.h>

int main()
{
    /*1.ÖRNEK DİZİLER*/
    int benimDizim[] = {25, 50, 75, 100};
    benimDizim[0] = 33;
    printf("%d\n", benimDizim[0]);
    printf("%d", benimDizim[10]); //boş olduğu için rastgele bir değer döndürüyor. Dizinin 4 indexini doldursam da diziler hafızada eksta fazla yer açarlar bu yüzden rastgele bir değer döndürüyor. 
    return 0;
}