/******************************************************************************
do the multiplication 1 to n number
like this 1x2x3x4x____xn
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,result=1,i;//here result = 1 becouse 
    scanf("%d",&n);// if I take 0 then all result will be 0;
    for(i=1;i<=n;i++)// becouse this is multiplication not summition
    {
        if(i==1)
        printf("%d x ",i);
        else if(i==n)
        printf("%d",i);
        else
        printf("%d x ",i);
        result = result*i;
    }
     printf(" = %d",result);
    return 0;
}
