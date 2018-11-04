#include <stdio.h>
#include <stdlib.h>
/*
题目：输入年份判断是否为闰年。
*/
int main()
{
    while(1)
    {
        int year;
        printf("请输入一个年份，我会回复你这一年是否是闰年：");
        scanf("%d", &year);
        if(year % 4 != 0)
            printf("\n这一年不是闰年！\n");
        else
        {
            if(year % 100 == 0 && year % 400 != 0)
            printf("\n这一年不是闰年！\n");
            else

            printf("\n这一年是闰年！\n");
        }
    }
    return 0;
}
