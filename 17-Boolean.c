#include <stdio.h>
#include <stdbool.h> //Boolean işlemleri için bu kütüphaneyi ekliyoruz. 

int main()
{
/*1.ÖRNEK BOOLEAN*/
bool ProgramcilikGuzelMi = true;
bool TembellikIyiMi = false;
printf("%d\n", ProgramcilikGuzelMi); //1
printf("%d\n", TembellikIyiMi); //0
printf("%d\n", 10 > 9); //1
int x = 10;
int y = 9;
printf("%d\n",x < y); //0
printf("%d\n",10 == 10); //1
printf("%d\n",10 == 12); //0
printf("%d\n",10 != 10);//0
return 0;
}