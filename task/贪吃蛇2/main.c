#include <stdio.h>
#include <stdlib.h>
int t, i, j;
void Map();   //定义一个地图的函数
int main()
{
    Map();
    return 0;
}
void Map()
{
    char Map[32][90];
    for (t = 0; t < 90; t ++)
    {
        printf("%c", '*');
    }
    printf("\n");
    for (i = 0; i < 30; i ++ )
    {
        for(j = 0; j < 90; j ++)
        {

            printf("%c", '.');
        }
        printf("\n");
    }
     for (t = 0; t < 90; t ++)
    {
        printf("%c", '*');
    }
}
