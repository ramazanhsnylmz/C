#include <stdio.h>

int main()
{
    /*1.ÖRNEK SAYMA SAYILARI*/
    int i, n;
    printf("Ust sinir degerini giriniz :");
    scanf("%d", &n);
    printf("1'den %d'ye kadar tum sayma sayilari :\n", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}