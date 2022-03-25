/******************************************************************************
find counting number of digit from given number
like 123 here is 3 digit

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;//this is for find all digit
        ++count;//here will be count all digit 
    }
    printf("%d",count);//here will print how many digit on the given intger

    return 0;
}
