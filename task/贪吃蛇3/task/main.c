#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define H 30
#define L 60
//声明各种变量
char Map[H][L];
int score;
int  key;  //按键保存
int  sum = 1, over = 0;  //蛇的长度, 游戏结束(自吃或碰墙)
int  dx[4] = {0, 0, -1, 1};  //左、右、上、下的方向
int  dy[4] = {-1, 1, 0, 0};
//搞个蛇
struct Snake //蛇的每个节点的数据类型
{
    int x, y; //左边位置
    int now;  //保存当前节点的方向，0， 1， 2， 3为左右上下
}
Snake[H*L];
const char Shead = '@';  //蛇头
const char Sbody = '*'; //蛇身子
const char Sfood = '#'; //蛇食物
const char Snode = ' ';  //' '在地图上标示为空

//声明函数
void Menu();
void Initial();
void Create_Food();
void Button();
void Move();
void Check_Border();
void Check_Head(int x, int y);
void Show();


int main()
{
    Menu();
    system("pause");
    system("cls");
    Initial();
    Show();

    return 0;
}
void Menu()
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& 欢迎来到葵花贪吃蛇！&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("&&& 关于游戏规则：通过上下左右来控制蛇的移动, #为蛇的食物, 不能撞墙哦! &&&");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}
void Initial()
{
    int i, j;
    int hx, hy;
    memset(Map, '.', sizeof(Map));  //初始化地图全部为空' '
    system("cls");
    srand(time(0));   //随机种子
    hx = rand()%H;    //产生蛇头
    hy = rand()%L;
    Map[hx][hy] = Shead;
    Snake[0].x = hx;  Snake[0].y = hy;
    Snake[0].now = -1;
    Create_Food();   //随机产生食物
   for(i = 0; i < H; i++)   //地图显示
 {
  for(j = 0; j < L; j++)
   printf("%c", Map[i][j]);
  printf("\n");
 }


     getch();   //先接受一个按键,使蛇开始往该方向走
     Button();  //取出按键,并判断方向
}
void Show()
{
    int  i, j;
    while(1)
    {
        _sleep(500); //延迟半秒(1000为1s),即每半秒刷新一次地图
        Button();   //先判断按键在移动
        Move();
        if(over)
        {
            system("cls");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& 哎呀你撞墙啦,小菜鸡! ^*^&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
            printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& 我去修墙啦呜呜呜 &&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            getchar();
            break;
        }
        system("cls");   //清空地图再显示刷新好的地图
       for(i = 0; i < H; i++)
  {
   for(j = 0; j < L; j++)
    printf("%c", Map[i][j]);
   printf("\n");
  }

    }
}
void Create_Food()
{
    int fx, fy;
    while(1)
    {
        fx = rand()%H;
        fy = rand()%L;
        if(Map[fx][fy] == '.')   //食物不能出现在蛇的位置
        {
            Map[fx][fy] == Sfood;
            break;
        }

    }
}
void Button()  //取出按键, 并判断方向
{
    if(kbhit != 0)   //检查是否有键盘输入,若有则返回非零值,若没有则返回0
    {
        while(kbhit != 0)   //可能存在多个按键,要全部取完,以最后一个为主
            key = getch();   //将按键从控制台中取出并保存到key中
        switch(key)
        {   //左
            case 75: Snake[0].now = 0;
            break;
            //右
            case 77: Snake[0].now = 1;
            break;
            //上
            case 72: Snake[0].now = 2;
            break;
            //下
            case 80: Snake[0].now = 3;
            break;
        }
    }
}
void Move()   //蛇的移动
{
    int i, x, y;
    int t = sum; //保留当前蛇的长度
    //记录当前蛇头的位置,并设置为空,蛇头先移动
    x = Snake[0].x;
    y = Snake[0].y ;
    Map[x][y] = '.';
    Snake[0].x = Snake[0].x + dx[Snake[0].now];
    Snake[0].y = Snake[0].y + dy[Snake[0].now];
    Check_Border();  //检查蛇头是否越界
    Check_Head(x,y);   //蛇头移动后的位置情况,参数为:蛇头的开始位置
    if(sum == t)
        for(i = 1; i < sum; i ++)
    {
        if(i == 1)  //尾节点设置为空再移动
        Map[ Snake[i].x ][ Snake[i].y ] = '.';
        if(i == sum -1)  //蛇头后面蛇身节点, 特殊处理
        {
            Snake[i].x = x;
            Snake[i].y = y;
            Snake[i].now = Snake[0].now;
        }
        else  //其他蛇身即走到前一个蛇身的位置
        {
           Snake[i].x = Snake[i + 1].x;
           Snake[i].y = Snake[i + 1].y;
           Snake[i].now = Snake[i + 1].now;
        }

    Map[Snake[i].x][Snake[i].y] = '*';  //移动后要置'*'为蛇身
    }
}
void Check_Border()
{
     if(Snake[0].x < 0 || Snake[0].x > H
 || Snake[0].y < 0 || Snake[0].y >= L)
     over = 1;
}
void Check_Head(int x, int y)
{
    if(Map[Snake[0].x][Snake[0].y] == '.')  //为空
        Map[Snake[0].x][Snake[0].y] = '@';
    else if(Map[Snake[0].x][Snake[0].y] == '#')  //为食物
    {
        Map[Snake[0].x][Snake[0].y] = '@';
        Snake[sum].x = x;
        Snake[sum].y = y;
        Snake[sum].now =Snake[0].now;
        Map[Snake[sum].x][Snake[sum].y] = '*';
        sum++;
        Create_Food();  //马上再产生一个食物
    }
    else
        over = 1;
}






