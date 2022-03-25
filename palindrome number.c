/******************************************************************************
find pelindrome number
pelindrome number means the given int and the reverse int is same
like 121 = 121

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,temp,rem,reverse=0,i;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;//at first need to find reverse of the given number
        temp=temp/10;
    }
    if(n==reverse)//if the given number and the reverse of this number then 
    printf("%d is palindrom number",n);//the number is palindrom other wise not palindrom
    else
    printf("%d is not palindrom number",n);

    return 0;
}
