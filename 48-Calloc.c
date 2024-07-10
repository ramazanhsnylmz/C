#include <stdio.h>
#include <stdlib.h> //calloc fonksiyonunu kullanmak için ekledik.
/*1.ÖRNEK CALLOC*/

int main()
{
    int n, *isaretci, toplam = 0;
    printf("Toplanacak eleman sayisini giriniz :");
    scanf("%d", &n);
    isaretci = (int*) calloc(n, sizeof(int)); //Kaç adet yer açka istiyorsak o çarpı açacağımız veri türünün boyutu kadar yer açıyor. calloc'un malloc'dan farkı açtığı bellek alanında her yeri ilklendirme yapıyor ilk değer atıyor malloc bunu yapmıyor. Başka bir farkı da calloc bütün tekpare bir bellek açarken malloc biraz daha rastgele bir bellek açıyor.
    if(isaretci == NULL) //Bellek ayırma işleminin başarısız olması durumunda.
    {
        printf("Hata! Bellek ayirma islemi basarisiz oldu.");
        exit(0);
    }
    printf("Toplanacak elemanlari giriniz :");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", isaretci + i); //Değerleri okuyup hafızada açtığımız alana kaydırmak.
        toplam += *(isaretci + i); //Ve bu pointer'ların işaret ettiği değerleri toplama eklemek burdaki mevzu.
    }
    printf("Toplam = %d", toplam);
    free(isaretci); //Ayrılmış olan belleği serbest bırak.
    return 0;
}