﻿// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        printf("%10d ", 1+(rand()%6));
        if (i % 5 == 0) {
        
            printf("\n");
        }
    }

    system("pause");
    return 0;
}
