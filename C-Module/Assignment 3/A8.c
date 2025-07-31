/*Check the given number is Strong number or not.
Input: n = 145*/

#include <stdio.h>
void main()
{
    int num = 145;
    int ogNum = num;

    int sum = 0;

    while (num > 0)
    {
        int rem = num % 10;

        int fact = 1;
        int i = 1;

        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        num = num / 10;
        
    }
    if(sum==ogNum)
    {
        printf("Its Strong Number");
    }
    else
    {
        printf("Its not Strong Number");
    }
}