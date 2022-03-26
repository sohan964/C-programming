/******************************************************************************
find first int, 2nd int multiplecation and 2nd int, 3rd int multiplecation
after do the sum of both.
like 
 1*2 + 2*3 + 3*4 + ..........+n1*n2
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1,n2,sum=0,a=1,b=2;
    scanf("%d %d",&n1,&n2);
    
    while(a<=n1 && b<=n2)//if a and b <= n1 and n2 then it will work
    {
        if(a==1 && b==2)
        printf("%d*%d",a,b);
        else if(a<=n1 && b<=n2)
       printf(" + %d*%d",a,b);
       sum=sum+a*b;//here will heppen lik sum=sum+1*2;
       a=a+1;//here every time a will increage +1
       b=b+1;//here every time b will increage +1

  
    }
    printf(" = %d",sum);//this for the hole summition

    return 0;
}
