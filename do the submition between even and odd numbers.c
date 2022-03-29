/******************************************************************************
do the submition between even and odd numbers
like this 1-2+3-4+5-6___+odd-even
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)//here at first I find all even numbers
        {
        even=even+i;
        if(i==n)
        printf("%d",i);
        else
        printf("%d + ",i);
        
        }
        
        else
        {
        odd=odd+i;// and here I find all the odd numbers
        if(i==n)
        printf("%d",i);
        else
        printf("%d - ",i);
        }
    }
    printf(" = %d",odd-even);//and the last I do the submition and also print this
    
    return 0;
}
