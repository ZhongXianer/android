#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flowerprice;
   printf("在一个月黑风高的夜晚\n");
   printf("小男孩用自己的零花钱给小女孩买了一束玫瑰花\n");
   printf("然后小女孩就问道：这束花多少钱啊？\n");
   printf("小男孩回答道：");
   scanf("%d", &flowerprice);
   if(flowerprice > 999)
   {
       printf("哇，我们结婚吧！\n");
   }
   else if(flowerprice >= 99 && flowerprice <= 999)
   {
       printf("那我们可以约会啊！\n");
   }
   else if(flowerprice >= 9 && flowerprice < 99)
   {
       printf("我想再了解一下。\n");
   }
   else
   {
       printf("呸！\n");
   }

    return 0;
}
