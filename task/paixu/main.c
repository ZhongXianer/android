#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[5] = {16,25,9,90,23};
    int i,j;
    for(i = 0; i < 4;i++)
    {
        int temp;
        for(j = 0;j < 4-i;j ++)
        {
            if(nums[j] < nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j +1] = temp;
            }
        }
    }

    for(i =0; i < 5;i ++)
    {
        printf("%d\t",nums[i]);
    }
    return 0;
}
