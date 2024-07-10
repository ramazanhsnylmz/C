#include <stdio.h>
#include <stdlib.h> //Dosya okuma yazma işlemleri için kullanılan kütüphane.

#define Veri_Boyutu 1000

/*1.ÖRNEK DOSYAYA YAZDIRMA*/
int main()
{
  char veri[Veri_Boyutu]; //Veri boyutunu depolayan karakter dizisi.
  FILE *fPtr; //Pointer.
  fPtr = fopen("File.txt", "w+"); //w+ dosyayı write yazma modunda açar.
  if(fPtr == NULL) //fopen(), eğer başarısız olursa NULL döner. 
  {
     printf("Dosya olusturulamadi.\n");
     exit(EXIT_FAILURE); //Bağlantı başarısız olrusa programdan çıkıyor.
  }
  printf("Dosyaya kaydedilecek olan girdiyi al :");
  fgets(veri, Veri_Boyutu, stdin); //fgets() fonksiyonu ile alıyoruz. veri değişkenine attık, boyutu Veri_Boyutu kadar olacak ve standart input olarak aldık.
  fputs(veri, fPtr); //fputs() fonksiyonu ile veriyi pointer'ın işaret ettiği yere yazdık.
  fclose(fPtr); //fclose() ile pointer'ın işaret ettiği dosyayı kapattık işimiz bittiğinde kapatırsak daha verimli olur.
  printf("Dosyaniz basariyla olusturuldu ve icerigi kaydedildi...");
  return 0;
}