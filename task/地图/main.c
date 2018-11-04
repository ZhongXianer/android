#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i = 0; i < 10; i ++)
    {
        for(j = 0; j < 60; j ++)
        {
            printf("%c", ' ');
        }
        prinf("\n");
    }
    if(i > 0 && i < 20 || i > 40 && i < 60 )
    {
        printf("%c", ' ');
        else if (i > 20 && i < 40)
        {
            printf("%c", '#');
        }
    }
    for(i =20; i < 30; i ++)
    {
        for(j = 0; j < 60; j ++)
        {
            printf("%c", ' ');
        }
        prinf("\n");
    }
    return 0;
}
