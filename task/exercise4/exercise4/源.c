#include <stdio.h>
#include <stdlib.h>
/*
题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.
			编程 找出1000以内的所有完数。
*/
void main()
{
	int  j;
	int temp;
	int sum = 1;
	int i;
	for(i = 1;i <= 1000; i ++)
	{ 
		for (j = 2; j <= i; j++)
		{
			temp = i % j;
			if (temp == 0 && i / j != 1)
			{
				sum = sum + j;
			}
		}
		if(sum == i)
		printf("%d\t", sum);
	}
	


}
