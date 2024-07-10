#include <stdio.h>

int main()
{
    /*1.ÖRNEK SAYMA SAYILARI*/
    /*
    int i, n;
    printf("Ust sinir degerini giriniz :");
    scanf("%d", &n);
    i = 1;
    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
    */

    /*2.ÖRNEK DO WHILE*/
    int i, n;
    printf("Ust sinir degerini giriniz :");
    scanf("%d", &n);
    i = 1;
    do
    {
        printf("%d\n", i); //while'daki koşul sağlanmasa bile en az bir kere çalışacak.
        i++;
    }while(i <= n);
}
