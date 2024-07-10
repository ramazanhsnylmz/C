#include <stdio.h>
#include <math.h>

/*1.ÖRNEK FONKSİYON ÇEMBER*/
float cemberCapiHesapla(float yaricap)
{
return (2 * yaricap);
}
float cemberCevresiHesapla(float yaricap)
{
return (2 * 3.14 * yaricap);
}
float cemberAlaniHesapla(float yaricap)
{
return (3.14 * pow(yaricap,2)); //M_PI = pi sayısı
}
int main()
{
float yaricap, cap, cevre, alan;    
printf("Cemberin yaricapini giriniz :");
scanf("%f",&yaricap);
cap = cemberCapiHesapla(yaricap);
cevre = cemberCevresiHesapla(yaricap);
alan = cemberAlaniHesapla(yaricap);
printf("Cemberin Capi :%.2f\n",cap);
printf("Cemberin Cevresi :%.2f\n",cevre);
printf("Cemberin Alani :%.2f\n",alan);
return 0;
}
