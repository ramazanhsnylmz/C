#include <stdio.h>

int main()
{
/*1.ÖRNEK ARİTMETİK İŞLEMLER*/    
int g_intSayi_1, g_intSayi_2;
int g_intToplam, g_intFark, g_intCarpim, g_intMod;
float g_flBolum;
printf("Lutfen iki sayi giriniz.\n"); //& adres işareti hangi değere yapacaksak bu işareti koyacaz.
scanf("%d%d",&g_intSayi_1,&g_intSayi_2);
g_intToplam = g_intSayi_1 + g_intSayi_2;
g_intFark = g_intSayi_1 - g_intSayi_2;
g_intCarpim = g_intSayi_1 * g_intSayi_2;
g_flBolum = (float) g_intSayi_1 / g_intSayi_2;
g_intMod = g_intSayi_1 % g_intSayi_2;
printf("Toplam: %d\n",g_intToplam);
printf("Fark: %d\n",g_intFark);
printf("Carpim: %d\n",g_intCarpim);
printf("Bolum: %f\n",g_flBolum); //int için %d, float için %f yazıyoruz.
printf("Mod: %d\n",g_intMod);
return 0;
}

