#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
题目：判断101-200之间有多少个素数，并输出所有素数。
程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。 　　　　　　
*/

int main()
{
    int sum = 0;
    int num,i,dem;
    for(num = 101;num <= 200;num++)
    {
       for(i = 1;i < sqrt(num);i++)
       {
           dem = num % i;
        }
       if(dem==0) break;
       sum++;
       printf("%d\t",num);
    }
    printf("\n101-200之间有%d个素数",sum);

    return 0;
}
