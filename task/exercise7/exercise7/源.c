#include<stdio.h>
/*
题目：译密码，输入一串字符，要求将其中的大小写字母变为字母表其后的四个输出，即a变为e，b变为f等，
但是最后的四个字母w、x、y和z则变为a、b、c和d，大写字母作类似的处理。
*/
void main()
{
	char c;
	for (; (c=getchar()) != '\n';)
	{
		if ((c >= 65 && c < 87) || (c >= 97 && c < 119))
			printf("%c",(c+4));
		else if ((c >= 87 && c <= 90) || (c >= 119 && c <= 122))
			printf("%c",(c-22));
	}
}