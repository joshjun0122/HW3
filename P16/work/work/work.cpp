// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(void)
{
    int x;

    for (x = 1; x <= 10; x++)
    {
        printf("%.2f ", sqrt(x));
    }
    printf("\n");
    system("pause");
    return 0;
}
