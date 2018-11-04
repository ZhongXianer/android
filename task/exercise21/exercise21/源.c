#include<stdio.h>
/*
题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在 第10次落地时，
共经过多少米？第10次反弹多高？
*/
int main()
{
	float height = 100;
	float sum = 100;
	int i;
	for (i = 1; i <= 9; i++)
	{
		height = height / 2;
		sum = sum + 2 * height;
	}
	height = height / 2;
	printf("第%d次反弹的高度为：%f\n", i, height);
	printf("十次落地时经过的总高度为：%.2f",sum);


	return 0;
}