#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
题目：打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个“水仙花数”，
因为153=1的三次方＋5的三次方＋3的三次方。
程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。
*/
int main()
{
    int num;
    for(num = 100; num <=999;num++)
    {
        int temp,sum;
        int unit,dec,hun;
        unit = num % 10;
        temp = num/10;
        dec = temp % 10;
        temp = temp/10;
        hun = temp % 10;
        sum =pow(unit,3) + pow(dec,3) + pow(hun,3) ;
        if(sum == num)
            printf("%d\t",num);



    }
    return 0;
}
