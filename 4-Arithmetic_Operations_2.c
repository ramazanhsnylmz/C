#include <stdio.h>

int main()
{
/*1.ÖRNEK HIZLI DEĞER ARTIRMA*/
int i = 3;
printf("%d\n",i);
i += 5; // i = i + 5
printf("%d\n",i);
i -= 5; // i = i - 5
printf("%d\n",i);
i *= 5; // i = i * 3
printf("%d\n",i);
i /= 5; // i = i / 5
printf("%d\n",i);
int j = 10;
printf("*************\n");
printf("%d\n", j);
printf("%d\n", j++); //önce mevcut değer yazılacak sonra değer artacak.
printf("%d\n", j);
printf("%d\n", ++j); //önce değer artacak sonra mevcut değer yazılacak.
printf("%d\n", j);
return 0;
}