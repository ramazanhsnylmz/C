#include <stdio.h>

enum Seviyeler
{
  DUSUK, ORTA = 18, YUKSEK //Sayısal olarak sırayla 0,1,2 şeklinde olacaktır eğer kendimiz bir değer atamassak.
}; //; buna dikkat et!

int main()
{
   /*1.ÖRNEK ENUM SEVİYELER*/
   enum Seviyeler Odasicakligi;
   enum Seviyeler Yukseklik;
   Odasicakligi = DUSUK;
   Yukseklik = ORTA;
   printf("%d\n", Odasicakligi); //0 değeri dönecek.
   printf("%d\n",Yukseklik); //18 değeri dönecek çünkü ben ORTA = 18 yaptım.
   return 0;
}