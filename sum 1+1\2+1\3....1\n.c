/******************************************************************************
do the sumision like this 1 + 1/2 + 1/3 + 1/4 + _____ + 1/n
*******************************************************************************/
#include <stdio.h>

int main()
{
    double sum=0,n,i;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        printf("%.0lf + ",i);
        else if(i==n)
        printf("1/%.0lf",i);
        else
        printf("1/%.0lf + ",i);
        sum=sum+(1/i);// every time 1 will devided by i and do sumision with sum

    }
    printf(" = %lf",sum);

    return 0;
}
