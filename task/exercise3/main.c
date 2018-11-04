#include <stdio.h>
#include <stdlib.h>
/*
 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
程序分析：利用辗除法。
*/

int main()
{
    int m,n,a,b;
    int temp;
    printf("请输入两个正整数m、n并在中间用空格隔开：");
    scanf("%d %d", &m,&n);
    if(m > n)
    {
        a = m;
        b = n;
    }
    else
    {
        a = n;
        b = m;
    }
    do
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    while(temp != 0);

    int num;
    num = m*n/a;
    printf("m和n的最大公约数为：%d\n", a);
    printf("m和n的最小公倍数为：%d",num);


    return 0;
}
