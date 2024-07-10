#include <stdio.h>
#include <stdlib.h>
/*1.ÖRNEK REALLOC*/

int main()
{
    int *isaretci, n1, n2;
    printf("Boyut giriniz :");
    scanf("%d", &n1);
    isaretci = (int*) malloc(n1 * sizeof(int));
    if(isaretci == NULL)
    {
        printf("Hata! Bellek ayirimi basarisiz oldu.\n");
        exit(0);
    }
    printf("Ayrilan ilk bellek adresleri :\n");
    for(int i = 0 ; i < n1; i++)
    {
        printf("%p\n", isaretci + i); //%p ile yazarsak 16'lık sayı düzeninde yazar. %d yazarsak 10'luk sayı düzeninde yazar.
    }
    printf("Yeni boyutu giriniz :");
    scanf("%d", &n2);
    isaretci = realloc(isaretci, n2 * sizeof(int));
    if(isaretci == NULL)
    {
        printf("Hata! Bellek ayirimi basarisiz oldu.\n");
        exit(0);
    }
    printf("Ayrilan yeni bellek adresleri :\n");
    for(int i = 0 ; i < n2; i++)
    {
        printf("%p\n", isaretci + i);
    }
    free(isaretci);
    return 0;
}