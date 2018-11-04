#include <stdio.h>
#include <stdlib.h>

int main()
{
    double factshanghai;
    int strength;
    double maxshanghai = 256;
    printf("请输入玩家的力量：");
    scanf("%d", &strength);
    factshanghai = maxshanghai * (strength + 100) / 100;
    printf("武器的实际最大伤害为：%.2lf", factshanghai);

    return 0
}
