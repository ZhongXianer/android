#include <stdio.h>
#include <stdlib.h>

int score;
//声明函数
void Menu();
void Map();
//搞个蛇
struct Snake //蛇的每个节点的数据类型
{
    int x, y; //
    int now;  //保存当前节点的方向，0， 1， 2， 3为左右上下
}
Snake[30*60];
const char Shead = '■';  //蛇头
const char Sbody = '■'; //蛇身子
const char Sfood = '✿'; //蛇食物
const char Snode = ' ';  //' '在地图上标示为空

int main()
{
    Menu();
    system("pause");
    Map();
    return 0;
}
void Menu()
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&& 欢迎来到葵花贪吃蛇！&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
    printf("&&&关于游戏规则：&&&");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}


void Map()
{
    int t, i, j;
    for (t = 0; t < 60; t ++)
    {
        printf("%c", '✦');
    }
    printf("\n");
    for (i = 0; i < 30; i ++ )
    {
        for(j = 0; j < 60; j ++)
        {
            if(j == 0 || j == 59)
            {
                printf("%c", '✦');
            }
            printf("%c", ' ');
        }
        printf("\n");
    }
     for (t = 0; t < 60; t ++)
    {
        printf("%c", '✦');
    }
    printf("\n您的分数是：%d", score);
}
