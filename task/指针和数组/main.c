#include <stdio.h>
#include <stdlib.h>
#define N 5//注意一定要宏定义

int main()
{
    //数组名就是数组的首地址
    //二维数组的理解：1.是由n个一维数组所组成
    int i,j;
    double score[5][3] = {     //前面是行后面是列
        {15, 78, 98},
        {15, 75, 98},
        {15, 78, 97},
        {17, 78, 98},
        {15, 78, 68},    //注意每一个一维数据的大括号后面都要加逗号！！！！
    };
    //外层循环是行
    for(i = 0; i < 5; i ++)
    {
        //内层循环表示列
        for(j = 0; j < 3; j++)
           // printf("%.2lf\t", score[i][j]);      这个是用数据写
            //关于指针：在一维数组中score[i]  => *( score + i)
           // printf("%.2lf\t", *(score[i] + j));
            //用指针写
             printf("%.2lf\t", *(*(score + i) + j))
             //另一种表示方法;
            printf("\n");
    }

    //遍历第一行数据；第一行的数组名就是score[0]
    for(i = 0; i < 3; i ++)
    {
        printf("%.2lf\t",score[0][i]);//注意数据类型和它所代表的符号要相符合
    }
    //遍历第二行的数据
    printf("\n");
    for(i = 0; i < 3; i ++)
    {
        printf("%.2lf\t", score[1][i]);
    }










    //这玩意儿我已经彻底看不懂了
    /*int num[] = {[1] = 98, 12, 45, 66};
    int i, temp;
    int * ptr_num_start = num;
    int * ptr_num_end= num + 4;
    //数组逆序
    while(ptr_num_start !=ptr_num_end )
    {
        temp = *ptr_num_start;
        *ptr_num_start =* ptr_num_end;
        *ptr_num_end = temp;
        ptr_num_start++;
        ptr_num_end--;//论区分中英文字符的重要性

    }
    printf("%d\t", num);*/











/*
    //数组逆序
    int array[N] = {15, 20, 25, 30, 35};
    //实现数组的逆序  - 原理就是数组的首位元素进行交换
    int temp;//临时变量
    int i;
    for(i = 0; i < N / 2; i++ )//注意这里只能交换N/2次
    {
        //第i个值和第N-i-1个值相交换
        temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }
    printf("\n");
    for(i = 0; i < N; i++)
    {
        printf("%d\t", *(array + i) );//我不是很能理解这玩意儿
    }
*/

    /*int array[] = {15, 20, 25, 30, 35};
    int i;
    int * ptr_array = array;
    //赋值完毕后，就可以使用指针访问数组元素了
   for(i = 0; i < 5; i++)
   {
      // printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, array[i], &ptr_array[i]);
      //我还是不理解下面的那个
     //printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *(ptr_array + i), ptr_array + 1 );
     printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, * ptr_array++, &ptr_array[i]);
     //每次循环都会移动指针的指向，要注意重置

   }
   */
   /* int i;
    double score [] = {98, 87, 65, 43, 76};
    double * ptr_score = score;
    printf("double型数组的地址占%d个字节\n", sizeof(ptr_score));
    for(i = 0; i < 5; i++)
    {
        //printf("%.2lf\n", ptr_score[i] );
        //printf("%.2lf\n", * ptr_score);
        printf("%.2lf\n", * (ptr_score + i ));
    }
    */




    return 0;
}












