#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num;
    int i;
    printf("请输入一个数字：");
    scanf("%ld",&num);
    if(num < 0)
    {
        printf("fu\t");
        num = (-1)*num;
    }
   int Num[sizeof(num)];
    for(i = (sizeof(num)-1);i >= 0;i--)
    {
        int temp;
        temp = num%10;
        Num[i] = temp;
        num = num/10;
        if(num < 1)
            break;
    }
    for(i = 0; i < sizeof(num);i++)
    {
        if(Num[i] == 0)
        {
            printf("ling\t");
        }
         if(Num[i] == 1)
        {
            printf("yi\t");
        }
         if(Num[i] == 2)
        {
            printf("er\t");
        }
         if(Num[i] == 3)
        {
            printf("san\t");
        }
         if(Num[i] ==4)
        {
            printf("si\t");
        }
         if(Num[i] == 5)
        {
            printf("wu\t");
        }
         if(Num[i] == 6)
        {
            printf("liu\t");
        }
         if(Num[i] == 7)
        {
            printf("qi\t");
        }
         if(Num[i] == 8)
        {
            printf("ba\t");
        }
        if(Num[i] == 9)
        {
            printf("jiu\t");
        }
    }
    return 0;
}
