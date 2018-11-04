#include <stdio.h>
#include <stdlib.h>


#define N 5
//录入，排序，输出成绩
//函数与数组
void input(double[]);
void sort(double[]);
void show(double[]);

int main()
{
    double scores[N];
    input(scores);
    show(scores);
    return 0;
}
void input(double scores[])
{
    int i;
    for(i = 0; i < N; i ++)
    {
        printf("请输入学生的第%d门成绩为：", i + 1);
        scanf("%lf", &scores[i]);
    }
}
void show(double scores[])
{
    int i;
    printf("******************************************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    //打印也需要一个for循环
    for(i = 0; i < N;i ++)
    {
     printf("%.2lf\t", scores[i]);
    }

    printf("\n******************************************************\n");
}
//函数原型（多了一个分号）
/*void calcCircle(); //计算圆形的面积
void calcRectangle(); //计算矩形的面积
void calcSun();

/*
        计算圆的面积（函数实现）

void calcCircle()
{
    double radius, s; //半径和面积
    printf("请输入圆的半径：");
    scanf("%lf", &radius);  //这里的占位符不能用%.2lf
    s = 3.14 * radius * radius;//一定要引入头文件 <math.h>
    printf("半径为%.2lf的圆的面积为：%.2lf\n", radius, s);
}

void calcRectangle()
{
    //为了专业一点你还是定义width和height

    double a, b, s;
    printf("请输入矩形的长:");
    scanf("%lf", &a);
    printf("请输入矩形的宽：");
    scanf("%lf", &b);
    s = a * b;
    printf("长为%.2lf宽为%.2lf的矩形的面积为：%.2lf\n",a, b, s);

}
int calcSum()
{
    //1-100之间的偶数和
    int sum = 0;
    int i = 1;  //定义循环变量
    for(i = 1; i <= 100; i++)  //这里有i++后面就不需要i++
    {
        if(i % 2 == 0)
        {
            sum += i;

        }

    }
    return sum;
}*/
 /* //  calcCircle();
    //calcRectangle();
    //如果函数有返回值，调用时，记得使用对应类型的变量来接收！
    int sum = calcSum();
    printf("1-100之间的偶数和为：%d", sum);
     //调用计算圆面积的函数
    //自定义函数
    //书写函数的步骤：完成函数三要素
    //误区：不要一开始就去考虑如何完成某个功能

    //需要返回值吗？
    //函数名是什么？
    //需要给这个函数参数吗？
    */
        /*
    //演示动态分布内存
    int * nums;
    nums = (int *)malloc(sizeof(int) * 5);//为前面的指针动态分布了5个整型的空间
    nums = (int *)malloc(20);  //为前面的指针动态的分布了20个字节的空间
    //等价于 int nums[5]
    //为指针动态分配空间以后，指针就变成了数组
    free("nums");  //释放动态分配的内存
    nums = NULL;   //良好的编程习惯

    printf("这里是普通文字，非常普通！\n");
    system("pause");
    printf("这里是普通文字，非常普通！\n");
    system("cls");  //清屏 - 可以做简单的动画效果
    system("shutdown /r /t 180");     //180秒后自动关机
    system("shutdowm /a");   //取消自动关机

    //随机函数的用法
    //1.设置随机种子 - 一般跟时间连用， 因为时间每时每刻都是不同的
    srand(time(NULL));                            //srand(1234);
    //2.取随机数
    int num = rand();
    printf("%d\n", num);

    exit(0);//0-正常退出应用程序  非0 - 不正常退出

*/

    //ceil - 天花板    floor - 地板
    //ceil 进一法     floor 去尾法
    //如果是负数规律相反
/*    printf("%.2lf\n", ceil(-98.1));
    printf("%.2f\n",floor(-98.9));
*/

    //常用内置函数;
    //int ch;
    //printf("%d\n", isupper('A'));  //判断是否为大写的内置函数
    //printf("%d\n", islower('A')); //判断是否为小写
   /* printf("请输入任意的小写字母：");
    scanf("%c", &ch);
    printf("对应的大写字母为：%c", toupper(ch)); //变成对应的大写字母*/
    //如果传入的是数字表示的是ASCII码  如果要传数字应该加单引号
   // printf("50对应的字符是：%c\n", 50);
   /* int i;
    //打印所有的ASCII码对应的字符
    for(i = 0; i < 127; i++)
    {
        printf("%c\t", i);
    }*/
