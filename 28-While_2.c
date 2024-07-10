#include <stdio.h>

int main()
{
    /*1.ÖRNEK WHILE İLE BREAK KOMUTUNUN KULLANIMI*/
    /*
    int i;
    i = 0;
    while(i <= 10)
    {
        if(i == 5)
        {
            break; //i == 5 ise döngü kırılacak ve döngüden çıkacak.
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
    */

   /*2.ÖRNEK WHILE İLE CONTINUE KOMUTUNUN KULLANIMI*/
   
   int i;
    i = 0;
    while(i <= 10)
    {
        if(i == 5)
        {
            continue; //i == 5 ise döngünün başına gidecek altında kalan kodlar atlanacak. Fakat for'dan farklı olarak i++; kodu da atlanacağı için i sürekli 5 olacak ve sürekli olarak döngü dönecek bu yüzden while döngüsünde continue komutunu kullanırken dikkat etmeliyiz!
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}