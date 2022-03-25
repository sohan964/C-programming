//find any given number factorial.
#include <stdio.h>

int main()
{
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;//every time i will multiply with fact
    }
    printf("%d",fact);//the last ansthur is the factorial number

    return 0;
}
