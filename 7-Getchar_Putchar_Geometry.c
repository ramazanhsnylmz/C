#include <stdio.h>
#include <math.h>

int main()
{
/*1.ÖRNEK GETCHAR PUTCHAR*/    
/*
char ogrencinotu;
printf("Ogrenci notunu giriniz :");
ogrencinotu = getchar(); //Tek karakterlik değeri aldık.
putchar(ogrencinotu); //Tek karakterlik değeri yazdırdık.
return 0;
*/

/*2.ÖRNEK DİKDÖRTGEN ALAN ÇEVRE HESAPLAMA*/
/*
float x, y, cevre, alan;
printf("Dikdortgenin Uzunlugunu Giriniz :");
scanf("%f", &x);
printf("Dikdortgenin Genisligini Giriniz :");
scanf("%f", &y);
cevre = (2*x) + (2*y);
alan = x * y;
printf("Dikdortgenin Cevresi :%.0f\n", cevre);
printf("Dikdortgenin Alani :%.0f\n", alan);
return 0;
*/

/*3.ÖRNEK ÇEMBER ALAN ÇEVRE HESAPLAMA*/
float yaricap, cap, alan, cevre;
printf("Cemberin yaricapini giriniz :");
scanf("%f", &yaricap);
cap = 2 * yaricap;
cevre = 2 * 3.14 * yaricap; //M_PI pi sayısı, hata veriyo ama çalışıyor.
alan = 3.14 * pow(yaricap,2);
printf("Cemberin Capi :%.3f\n", cap);
printf("Cemberin Cevresi :%.3f\n", cevre); 
printf("Cemberin Alani :%.3f\n", alan);  
return 0;
}