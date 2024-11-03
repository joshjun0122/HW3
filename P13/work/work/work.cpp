// work.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main(void)
{
    int k;
    double Ans;
    printf("計算3.5的k次方?請輸入k=");
    scanf("%d", &k);
    Ans = Power(3.5, k);
    printf("3.5的%d次方=%f\n", k, Ans);
    system("pause");
}

double Power(double X, int n)
{
    int i;
    double PowerXn = 1;
    for (i = 1; i <= n; i++)
        PowerXn = PowerXn * X;
    return PowerXn;
}

