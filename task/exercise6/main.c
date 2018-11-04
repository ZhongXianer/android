#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
题目：求方程ax2+bx+c=0的根，要求输入系数a、b和c，输出方程的根。
程序分析：考虑系数不同的情况。
*/

int main()
{
    int a,b,c;
    float p,q;
    int judge;
    printf("假设有一个方程为ax^2+bx+c=0\n");
    printf("请输入a,b,c，并在中间用空格隔开：");
    scanf("%d %d %d",&a,&b,&c);
    judge = pow(b,2) - 4*a*c;
    p = (-b)/(2*a);
    q = sqrt(judge)/(2*a);
    if(judge < 0)
        printf("此方程没有实根！\n");
    else if(judge ==
             0)
        printf("此方程有一个实根为：\nx = %.2f",p);
    else
    {
        printf("此方程有两个根分别为：\n");
        printf("x1 = %.2f,x2= %.2f",(p+q),(p-q));
    }


    return 0;
}
