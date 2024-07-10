#include <stdio.h>

int main()
{
    /*1.ÖRNEK ÇOK BOYUTLU DİZİ MATRİS*/
    /*
    int benimMatrisim[2][3] = {{1,2,3}, {4,5,6}};
    for(int i = 0; i < 2; i++) //satır
    {
        for(int j = 0; j < 3; j++) //sütun
        {
            printf("%d ",benimMatrisim[i][j]);
        }
        printf("\n");
    }
    return 0;
    */

   /*2.ÖRNEK ÇOK BOYUTLU DİZİ*/
   int benimMatrisim[2][3][4] = {{{1,2,3,4}, {5,6,7,8}, {9,8,7,6}},          //benimMatrisim[2][3][4] 2 tane 3x4'lük matris demek.
                                 {{13,14,15,16}, {17,18,19,20}, {21,22,23,24}}};
    for(int i = 0; i < 2; i++) //matris adedi
    {
        for(int j = 0; j < 3; j++) //satır
        {
            for(int k = 0; k < 4; k++) //sütun
            {
                printf("%d ", benimMatrisim[i][j][k]);
            }
            printf("\n");
        }
        printf("--------------------\n");
    }                                                               }
