/******************************************************************************

 find the sum of given number digit
 123
 sum=1+2+12
 6

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,temp,rem,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)//if temp not equal 0 then will go the next stap other wise not
    {
        rem=temp%10;//here ever time rem = temp % 10
        sum=sum+rem;//here rem will come and do sumition with sum and sum will be the output
        temp=temp/10;//here temps value will change
        
    }
    printf("the sum of digit = %d",sum);//here the output will be the last sum result
    

    return 0;
}
/*
input
123
output
the sum of digit = 6
*/
