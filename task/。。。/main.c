#include<stdio.h>
#include<math.h>
/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，
如果开方后的结果满足如下条件，即是结果。
*/
void main()
{
	long int num;
	double m, n;
	for (num = 1; num <= 100000; num++)
	{
		m = sqrt(num + 100) % 1;
		n = sqrt(num + 268) % 1;
		if (m == 0 && n == 0)
			printf("%d", num);

	}
}
