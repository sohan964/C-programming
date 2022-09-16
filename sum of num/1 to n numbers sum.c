/******************************************************************************
find sum of 1 to n serige like
1 + 2 + 3 + 4 +......+n;

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//the loop will go up to n
    {
        sum=sum+i;//every time i will do summition with sum
        if(i==1)//this process for good looking output
        printf("%d + ",i);
        else if(i==n)
        printf("%d",i);
        else
        printf("%d + ",i);
    }
    printf(" = %d",sum);// the total summition will print here
    

    return 0;
}

