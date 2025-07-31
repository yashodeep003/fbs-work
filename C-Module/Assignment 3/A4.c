/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/ 

#include<stdio.h>
void main()
{
    int no=15,i=2,flag=0;
    while(i<no)
    {
        if(no %i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
     if(flag==0){
            printf("Its Prime");
        }
        else{
            printf("Its not  prime");
        }
}


