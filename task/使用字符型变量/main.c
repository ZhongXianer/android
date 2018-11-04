#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1 ='a';
    char ch2 ='A';
    char ch3 =' ';
    printf("×Ö·û\tASCIIÂë\n");
    printf("%c\t%d\n",ch1,ch1);
    printf("%c\t%d\n",ch2,ch2);
    printf("%c\t%d\n",ch3,ch3);
    printf("%c\t%d\n",ch1-32,ch2-32);
    return 0;
}
